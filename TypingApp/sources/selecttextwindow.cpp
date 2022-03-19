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

void SelectTextWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    hide();
    QString qs = item->text();
    qs = qs.remove('\u0000');    //https://doc.qt.io/qt-5/qstring.html#remove// Uwaga! usuwa tez male;

    std::string s = qs.toUtf8().constData();
    std::string fileName;
    int endOfLineCharacters_, characters_, words_;

    std::istringstream fullInfo(s);
    fullInfo >> fileName >> characters_
             >> words_ >> endOfLineCharacters_;

    FileInfo fileInfoInData_(endOfLineCharacters_, characters_, words_);

    std::string userFilePath = pathToTextDirectory + fileName;
    Localisation pathToFileInData_(userFilePath);

    typingWindow = new TypingWindow(fileInfoInData_, pathToFileInData_, this);
    typingWindow->show();
}

void SelectTextWindow::on_pushButton_clicked()
{
    hide();
}

SelectTextWindow::~SelectTextWindow()
{
    delete ui;
}
