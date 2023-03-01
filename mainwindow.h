#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "counter.h"

#include <QMainWindow>
#include <qpointer.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Counter counter;
};
#endif // MAINWINDOW_H
