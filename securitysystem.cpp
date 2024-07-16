#include "securitysystem.h"
#include "ui_securitysystem.h"
#include <QMessageBox>

SecuritySystem::SecuritySystem(Graph *g,QWidget *parent,QString *change) :
    QMainWindow(parent),
    ui(new Ui::SecuritySystem),
    graph(g)
    ,changes0(change)
{
    ui->setupUi(this);

    setFixedSize(626,402);
    move(780,185);

    connect(ui->addEdgeBtn, &QPushButton::clicked, this, &SecuritySystem::addEdge);
    connect(ui->removeEdgeBtn, &QPushButton::clicked, this, &SecuritySystem::removeEdge);
    connect(ui->modifyEdgeBtn, &QPushButton::clicked, this, &SecuritySystem::modifyEdge);


}



void SecuritySystem::addEdge() {
    QString srcName = ui->srcLocationInput->text();
    QString destName = ui->destLocationInput->text();
    int weight = ui->weightInput->text().toInt();
    int srcId = graph->getVertexIdByName(srcName.toStdString());
    int destId = graph->getVertexIdByName(destName.toStdString());
    if (srcId == -1 || destId == -1) {
        displayError("无效的地点名称！");
        return;
    }
    graph->addEdge(srcId, destId, weight);
    ui->statusTextEdit->append("添加新路径: " + srcName + " <-> " + destName + " 距离: " + QString::number(weight));
    QString change = "新路径: " + srcName + " <-> " + destName + " 距离: " + QString::number(weight);
    *changes0 += change + "\n";

}

void SecuritySystem::removeEdge() {
    QString srcName = ui->srcLocationInput->text();
    QString destName = ui->destLocationInput->text();
    int srcId = graph->getVertexIdByName(srcName.toStdString());
    int destId = graph->getVertexIdByName(destName.toStdString());
    if (srcId == -1 || destId == -1) {
        displayError("无效的地点名称！");
        return;
    }
    if(graph->removeEdge(srcId, destId)){
        ui->statusTextEdit->append("删除路径: " + srcName + " -> " + destName);
        QString change = "道路不通 " + srcName + " <-> " + destName ;
        *changes0 += change + "\n";
    }
    else ui->statusTextEdit->append("删除不成功，无直达路径！");
}

void SecuritySystem::modifyEdge() {
    QString srcName = ui->srcLocationInput->text();
    QString destName = ui->destLocationInput->text();
    int newWeight = ui->weightInput->text().toInt();
    int srcId = graph->getVertexIdByName(srcName.toStdString());
    int destId = graph->getVertexIdByName(destName.toStdString());
    if (srcId == -1 || destId == -1) {
        displayError("无效的地点名称！");
        return;
    }
    if (graph->modifyEdge(srcId, destId, newWeight)){
        ui->statusTextEdit->append("修改现有路径: " + srcName + " <-> " + destName + " 新距离: " + QString::number(newWeight));
        QString change = "路径已重新修建: " + srcName + " <-> " + destName + " 距离: " + QString::number(newWeight);
        *changes0 += change + "\n";
    }
    else ui->statusTextEdit->append("修改不成功，无直达路径！");
}

void SecuritySystem::displayError(const QString &message) {
    QMessageBox::critical(this, "错误", message);
}

SecuritySystem::~SecuritySystem() {
    delete ui;
}

