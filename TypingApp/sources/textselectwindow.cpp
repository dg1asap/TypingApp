#include "../headers/textselectwindow.h"
#include "ui_textselectwindow.h"

TextSelectWindow::TextSelectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TextSelectWindow)
{
    ui->setupUi(this);
}

TextSelectWindow::~TextSelectWindow()
{
    delete ui;
}
