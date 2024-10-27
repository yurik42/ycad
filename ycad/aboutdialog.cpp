#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    ui->about_text->moveCursor (QTextCursor::End);
    ui->about_text->insertPlainText("ycad V.0.1.42\nyyk99@home");
    ui->about_text->moveCursor (QTextCursor::End);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
