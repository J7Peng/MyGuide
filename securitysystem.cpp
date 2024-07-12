#include "securitysystem.h"
#include "ui_securitysystem.h"
#include <QMessageBox>

SecuritySystem::SecuritySystem(Graph *g,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecuritySystem),
    graph(g)
{
    ui->setupUi(this);

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
    ui->statusTextEdit->append("添加路径: " + srcName + " -> " + destName + " 重量: " + QString::number(weight));
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
    graph->removeEdge(srcId, destId);
    ui->statusTextEdit->append("删除路径: " + srcName + " -> " + destName);
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
    graph->modifyEdge(srcId, destId, newWeight);
    ui->statusTextEdit->append("修改路径: " + srcName + " -> " + destName + " 新重量: " + QString::number(newWeight));
}

void SecuritySystem::displayError(const QString &message) {
    QMessageBox::critical(this, "错误", message);
}

SecuritySystem::~SecuritySystem() {
    delete ui;
}

