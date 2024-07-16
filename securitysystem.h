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
    // void addLocation();
    void addEdge();
    void removeEdge();
    void modifyEdge();

private:
    Ui::SecuritySystem *ui;
    Graph *graph;
    QString *changes0;

    void displayError(const QString &message);
};

#endif // SECURITYSYSTEM_H

