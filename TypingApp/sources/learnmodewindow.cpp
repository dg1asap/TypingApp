#include "../headers/learnmodewindow.h"
#include "ui_learnmodewindow.h"

LearnModeWindow::LearnModeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LearnModeWindow)
{
    ui->setupUi(this);
}

LearnModeWindow::~LearnModeWindow()
{
    delete ui;
}
