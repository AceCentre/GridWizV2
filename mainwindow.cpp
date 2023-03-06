#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
     * Connect toolbar components to browser links
     */
    QObject::connect(ui->toolbarFeedback, SIGNAL(triggered()),
                     &browser, SLOT(openContact()));

    QObject::connect(ui->toolbarIssues, SIGNAL(triggered()),
                     &browser, SLOT(openIssues()));

    QObject::connect(ui->toolbarAbout, SIGNAL(triggered()),
                     &browser, SLOT(openAbout()));

    /*
     * Connect search form components to search class
     */
    QObject::connect(ui->searchTextInput, SIGNAL(textChanged(QString)),
                     &search, SLOT(setSearchText(QString)));

    QObject::connect(ui->safeSearch, SIGNAL(stateChanged(int)),
                     &search, SLOT(setSafeSearch(int)));


    /*
     * Set default values
     */
    ui->safeSearch->setCheckState(search.getSafeSearch());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_toolbarExit_triggered()
{
    QApplication::quit();
}

