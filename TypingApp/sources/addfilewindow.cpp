#include "../headers/addfilewindow.h"
#include "ui_addfilewindow.h"
#include "../headers/newfile.h"
#include <QMessageBox>

AddFileWindow::AddFileWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFileWindow)
{
    ui->setupUi(this);
}

void AddFileWindow::on_addButton_clicked()
{
    QString userPath = ui->newPath->text();
    std::string userPathString = userPath.toUtf8().constData();             //niestety tego wymaga skladnia
    newFile userFile(userPathString);

    if(userFile.path.connection()  == true)
    {
        QMessageBox::information(this, "File Added", "File has been successfully added");
        userFile.create();
        hide();
    }else{
        QMessageBox::warning(this, "Warning 404", "File not found");
    }
}

AddFileWindow::~AddFileWindow()
{
    delete ui;
}
