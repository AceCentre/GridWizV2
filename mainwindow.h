#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "counter.h"
#include "browser.h"

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

private slots:
    void on_toolbarExit_triggered();

private:
    Ui::MainWindow *ui;
    Counter counter;
    Browser browser;
};
#endif // MAINWINDOW_H
