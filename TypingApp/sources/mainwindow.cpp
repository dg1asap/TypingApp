#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_addFileButton_clicked()
{
    addFileWindow = new AddFileWindow(this);
    addFileWindow->show();
}

void MainWindow::on_infoButton_clicked()
{
    QMessageBox::information(this, "Info", " sadf\nfdasf\nadf \n sadaf");
}

void MainWindow::on_textSelectButton_clicked()
{
}

void MainWindow::on_learnModeButton_clicked()
{
    hide();

}
