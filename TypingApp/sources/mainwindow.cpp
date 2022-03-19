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
    QMessageBox::information(this, "Info",
    "	Aplikcaja do nauki pisania bezwzrokowego\n\nPierwsze zadanie\n	programistyczne z PROE\n\nProwadzacy: Marcin Baczyk\nAutor: Damina Górski\n\nInstrukcja:\n\n	Loading...\n\n			2020\n			ver1.0.");
}

void MainWindow::on_textSelectButton_clicked()
{
    selectTextWindow = new SelectTextWindow("../files/textsInfo.txt", "../files/texts/", this);
    selectTextWindow->show();
}

void MainWindow::on_learnModeButton_clicked()
{
    hide();
    selectTextWindow = new SelectTextWindow("../files/learnModeInfo.txt", "../files/learnMode/", this);
    selectTextWindow->show();
}
