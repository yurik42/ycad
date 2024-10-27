#include "mainwindow.h"
#include "./ui_mainwindow.h"

#if 0
#include "aboutdialog.h"
#endif

#include <QDebug>
#include <QFileDialog>
#include <QGraphicsPixmapItem>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("Ready...");
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
#if 0
    qDebug() << "onAboutTriggered...";
    AboutDialog dlg;
    dlg.exec();
#else
    QMessageBox::about(this, tr("About ycad"),
        tr("<p>The <b>ycad</b> is a DIY CAD software</p><p>Version: 0.1.42</p>"));
#endif
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
        ui->statusbar->showMessage("Loaded image from:" + fileName);
    }
}
