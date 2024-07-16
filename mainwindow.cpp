#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "securitysystem.h"
#include "introduction.h"
#include<QPropertyAnimation>
#include<QPainter>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,currentIndex(0)
{
    ui->setupUi(this);

    setFixedSize(1132,770);

    ui->anouncementtextEdit->setStyleSheet("background-color: rgba(255, 255, 255, 128);");

    images << ":/imgs/Image/fengyuan.jpg"<< ":/imgs/Image/luojiashan.jpg"<< ":/imgs/Image/yingyuan.jpg"<< ":/imgs/Image/guiyuancaochang.jpg";

    backgroundLabel = new QLabel(this);
    backgroundLabel->setGeometry(0, 0, this->width(), this->height());
    backgroundLabel->setScaledContents(true);
    backgroundLabel->lower(); // 将标签置于底层

    // 设置透明度
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect;
    opacityEffect->setOpacity(0.3); // 30%透明度
    backgroundLabel->setGraphicsEffect(opacityEffect);

    // 设置定时器
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::changeBackground);
    timer->start(20000); // 每20秒触发一次

    // 初始设置背景图片
    changeBackground();





    //主界面切换
    ui->stackedWidget->setCurrentIndex((0));
    //退出功能实现
    connect(ui->actionexit,&QAction::triggered,this,[=](){
        this->close();
    });


    connect(ui->enterSecurity,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex((1));
    });



    connect(ui->enterTourist,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex((2));
    });

    connect(ui->exitTourist,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex((0));
        updateAnnouncementTextEdit();
    });

    connect(ui->exitSecurity,&QPushButton::clicked,this,[=](){
        ui->stackedWidget->setCurrentIndex((0));
        updateAnnouncementTextEdit();
    });

    changes= new QString("");




    // 初始化图
    graph = new Graph(20);


    // 添加顶点和边
    graph->addVertex(0, "南2门");
    graph->addVertex(1, "珞瑜门");
    graph->addVertex(2, "信息学部1教");
    graph->addVertex(3, "10舍");
    graph->addVertex(4, "国软c3");
    graph->addVertex(5, "网安小操场");
    graph->addVertex(6, "信操");
    graph->addVertex(7, "信图");
    graph->addVertex(8, "星湖体育场");
    graph->addVertex(9, "珞珈门");
    graph->addVertex(10, "珞珈广场");
    graph->addVertex(11, "珞珈山");
    graph->addVertex(12, "雷军科技楼");
    graph->addVertex(13, "桂园操场");
    graph->addVertex(14, "九一二操场");
    graph->addVertex(15, "枫园");
    graph->addVertex(16, "松园操场");
    graph->addVertex(17, "樱园");
    graph->addVertex(18, "计算机学院");
    graph->addVertex(19, "工主教");

    // 添加边
    graph->addEdge(0, 3, 228);
    graph->addEdge(3, 0, 228);
    graph->addEdge(1, 2, 270);
    graph->addEdge(2, 1, 270);
    graph->addEdge(2, 3, 293);
    graph->addEdge(3, 2, 293);
    graph->addEdge(4, 3, 455);
    graph->addEdge(3, 4, 455);
    graph->addEdge(5, 4, 96);
    graph->addEdge(4, 5, 96);
    graph->addEdge(8, 3, 312);
    graph->addEdge(3, 8, 312);
    graph->addEdge(6, 2, 162);
    graph->addEdge(2, 6, 162);
    graph->addEdge(6, 7, 185);
    graph->addEdge(7, 6, 185);
    graph->addEdge(8, 7, 229);
    graph->addEdge(7, 8, 229);
    graph->addEdge(9, 8, 302);
    graph->addEdge(8, 9, 302);
    graph->addEdge(7, 11, 1300);
    graph->addEdge(11, 7, 1300);
    graph->addEdge(10, 9, 575);
    graph->addEdge(9, 10, 575);
    graph->addEdge(11, 10, 998);
    graph->addEdge(10, 11, 998);
    graph->addEdge(12, 9, 592);
    graph->addEdge(9, 12, 592);
    graph->addEdge(13, 10, 393);
    graph->addEdge(10, 13, 393);
    graph->addEdge(14, 11, 969);
    graph->addEdge(11, 14, 969);
    graph->addEdge(11, 15, 812);
    graph->addEdge(15, 11, 812);
    graph->addEdge(13, 18, 252);
    graph->addEdge(18, 13, 252);
    graph->addEdge(14, 13, 728);
    graph->addEdge(13, 14, 728);
    graph->addEdge(17, 18, 626);
    graph->addEdge(18, 17, 626);
    graph->addEdge(13, 17, 205);
    graph->addEdge(17, 13, 205);
    graph->addEdge(17, 14, 570);
    graph->addEdge(14, 17, 570);
    graph->addEdge(16, 14, 587);
    graph->addEdge(14, 16, 587);
    graph->addEdge(16, 15, 630);
    graph->addEdge(15, 16, 630);
    graph->addEdge(16, 17, 968);
    graph->addEdge(17, 16, 968);
    graph->addEdge(19, 17, 952);
    graph->addEdge(17, 19, 952);
    graph->addEdge(16, 19, 620);
    graph->addEdge(19, 16, 620);



    connect(ui->searchButton, &QPushButton::clicked, this, &MainWindow::openTouristWindow);

    connect(ui->changeMap, &QPushButton::clicked,this,&MainWindow::openSecurityWindow);

}

void MainWindow::openSecurityWindow(){
    securityWindow = new SecuritySystem(graph,this,changes);
    securityWindow->setAttribute(Qt::WA_DeleteOnClose);
    securityWindow->show();
}
MainWindow::~MainWindow()
{
    delete ui;
    delete graph;
    delete changes;
    delete backgroundLabel;
}

void MainWindow::updateAnnouncementTextEdit() {
    ui->anouncementtextEdit->append(*changes);
}

void MainWindow::changeBackground() {
    if (currentIndex >= images.size()) {
        currentIndex = 0;
    }



    // 创建新的 QPixmap
    QPixmap newPixmap(images[currentIndex]);

    // 创建 QGraphicsOpacityEffect
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect(backgroundLabel);
    backgroundLabel->setGraphicsEffect(opacityEffect);

    // 创建动画对象
    QPropertyAnimation *animation = new QPropertyAnimation(opacityEffect, "opacity");
    animation->setDuration(2000); // 渐变时间
    animation->setStartValue(0.0); // 开始时完全不透明
    animation->setEndValue(0.3);   // 渐变

    QPropertyAnimation *animationWait = new QPropertyAnimation(opacityEffect, "opacity");
    animationWait->setDuration(16000);
    animationWait->setStartValue(0.3);
    animationWait->setEndValue(0.3);

    QPropertyAnimation *animationFade = new QPropertyAnimation(opacityEffect, "opacity");
    animationFade->setDuration(2000);
    animationFade->setStartValue(0.3);
    animationFade->setEndValue(0.0);

    // 切换背景图片
    QSequentialAnimationGroup *animationGroup = new QSequentialAnimationGroup;
    animationGroup->addAnimation(animation);
    animationGroup->addAnimation(animationWait);
    animationGroup->addAnimation(animationFade);
    animationGroup->start(QAbstractAnimation::DeleteWhenStopped);

    backgroundLabel->setPixmap(newPixmap);
    currentIndex++;
}



void MainWindow::openTouristWindow()
{
    touristWindow = new TouristWindow(graph, this);
    securityWindow->setAttribute(Qt::WA_DeleteOnClose);
    touristWindow->show();
}

void MainWindow::on_gongzhujiao_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showFirstLayer();
    introwindow->show();
}

void MainWindow::on_yingyuan_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showSecondLayer();
    introwindow->show();
}

void MainWindow::on_songyuancaochang_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showThirdLayer();
    introwindow->show();
}

void MainWindow::on_jisuanjixueyuan_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showFourthLayer();
    introwindow->show();
}


void MainWindow::on_guiyuancaochang_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showFifthLayer();
    introwindow->show();
}


void MainWindow::on_jiuyiercaochang_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showSixthLayer();
    introwindow->show();
}


void MainWindow::on_fengyuan_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showSeventhLayer();
    introwindow->show();
}


void MainWindow::on_leijunkejilou_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showEighthLayer();
    introwindow->show();
}


void MainWindow::on_luojiaguangchang_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showNinthLayer();
    introwindow->show();
}


void MainWindow::on_luojiashan_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showTenthLayer();
    introwindow->show();
}


void MainWindow::on_luojiamen_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showEleventhLayer();
    introwindow->show();
}


void MainWindow::on_xinghutiyuchang_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showTwelfthLayer();
    introwindow->show();
}


void MainWindow::on_xintu_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showThirteenthLayer();
    introwindow->show();
}


void MainWindow::on_wanganxiaocaochang_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showFourteenthLayer();
    introwindow->show();
}


void MainWindow::on_xincao_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showFifteenthLayer();
    introwindow->show();
}


void MainWindow::on_shishe_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showSixteenthLayer();
    introwindow->show();
}


void MainWindow::on_guoruanc3_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showSeventeenthLayer();
    introwindow->show();
}


void MainWindow::on_xinxixuebuyijiao_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showEighteenthLayer();
    introwindow->show();
}


void MainWindow::on_nanermen_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showNineteenthLayer();
    introwindow->show();
}


void MainWindow::on_luoyumen_clicked()
{
    introwindow = new Introduction(this);
    introwindow->showTwentiethLayer();
    introwindow->show();
}

