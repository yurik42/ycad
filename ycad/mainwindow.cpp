#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "aboutdialog.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void
MainWindow::on_actionCreate_triggered()
{
    qDebug() << "onCreateTriggered...";
}

void
MainWindow::on_actionAbout_triggered()
{
    qDebug() << "onAboutTriggered...";
    AboutDialog dlg;
    dlg.exec();
}
