#ifndef SECURITYSYSTEM_H
#define SECURITYSYSTEM_H

#include <QMainWindow>
#include "graph.h"
#include<QDebug>
#include<QString>
namespace Ui {
class SecuritySystem;
}

class SecuritySystem : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecuritySystem(Graph *g,QWidget *parent = nullptr, QString *change=nullptr);
    ~SecuritySystem();

private slots:
    void addEdge();
    void removeEdge();
    void modifyEdge();

private:
    Graph *graph;

    Ui::SecuritySystem *ui;

    QString *changes0;

    void displayError(const QString &message);
};

#endif // SECURITYSYSTEM_H

