#include "../headers/selecttextwindow.h"
#include "ui_selecttextwindow.h"

SelectTextWindow::SelectTextWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectTextWindow)
{
    ui->setupUi(this);
}

SelectTextWindow::~SelectTextWindow()
{
    delete ui;
}

void SelectTextWindow::on_listView_doubleClicked(const QModelIndex &index)
{

}
