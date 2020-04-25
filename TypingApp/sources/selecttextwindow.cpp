#include <bits/stdc++.h>
#include <string>
#include <fstream>

#include "../headers/selecttextwindow.h"
#include "ui_selecttextwindow.h"
#include "../headers/fileinfo.h"
#include "../headers/localisation.h"

SelectTextWindow::SelectTextWindow(std::string pathToData_, std::string pathToTextDirectory_, QWidget *parent) :
    QDialog(parent),
    pathToData(pathToData_),
    pathToTextDirectory(pathToTextDirectory_),
    ui(new Ui::SelectTextWindow)
{
    ui->setupUi(this);

    std::string s;
    QString qs;
    std::fstream data(pathToData.c_str());

    while (! data.eof()) {
        getline(data, s);
        qs = QString::fromStdString(s);

        QListWidgetItem *item = new QListWidgetItem;
        item->setText(qs);

        ui->listWidget->addItem(qs);
    }

    data.close();
}

SelectTextWindow::~SelectTextWindow()
{
    delete ui;
}

void SelectTextWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{

}
