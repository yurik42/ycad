#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "aboutdialog.h"

#include <QDebug>
#include <QFileDialog>
#include <QGraphicsPixmapItem>

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

void
MainWindow::on_actionLoad_image_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        "Open Raster File",
        ".",
        "Raster Files (*.*)");

    if (!fileName.isEmpty()) {
        QGraphicsScene *scene = new QGraphicsScene();
        QPixmap *pixmap = new QPixmap(fileName);
        qDebug() << "item->size()" << pixmap->size();
        scene->addItem(new QGraphicsPixmapItem(*pixmap));
        ui->graphicsView->setScene(scene);
        ui->graphicsView->show();
    }
}
