#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "counter.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // When button is clicked, increment is called
    QObject::connect(ui->increaseButton, SIGNAL(clicked()),
                     &counter, SLOT(increment()));

    // When the counter fires labelChanged, then the setText is called
    QObject::connect(&counter, SIGNAL(labelChanged(QString)),
                     ui->countLabel, SLOT(setText(QString)));

    QObject::connect(ui->toolbarFeedback, SIGNAL(triggered()),
                     &browser, SLOT(openContact()));


    QObject::connect(ui->toolbarIssues, SIGNAL(triggered()),
                     &browser, SLOT(openIssues()));



    QObject::connect(ui->toolbarAbout, SIGNAL(triggered()),
                     &browser, SLOT(openAbout()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolbarExit_triggered()
{
    QApplication::quit();
}

