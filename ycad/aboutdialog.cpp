#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    ui->about_text->setText("ycad V.0.1.42\nyyk99@home");
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
