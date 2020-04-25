#include "../headers/typingwindow.h"
#include "ui_typingwindow.h"

TypingWindow::TypingWindow(FileInfo  fileInfoInData_,
                           Localisation pathToFileInData_,
                           QWidget *parent)
    : fileInfoInData(fileInfoInData_),
      pathToFileInData(pathToFileInData_),
      QDialog(parent),
      ui(new Ui::TypingWindow)
{
    ui->setupUi(this);
}

TypingWindow::~TypingWindow()
{
    delete ui;
}
