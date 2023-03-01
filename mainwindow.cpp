#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "counter.h"


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
}

MainWindow::~MainWindow()
{
    delete ui;
}
