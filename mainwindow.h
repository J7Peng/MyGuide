#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include"securitysystem.h"
#include <QMainWindow>
#include "touristwindow.h"
#include "graph.h"
#include <QLabel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openTouristWindow();
private:
    Ui::MainWindow *ui;
    Graph * graph;
    TouristWindow *touristWindow;
    SecuritySystem *securityWindow;
    QLabel *imageLabel;
    void loadImage(const QString &imagePath);
};

#endif // MAINWINDOW_H

