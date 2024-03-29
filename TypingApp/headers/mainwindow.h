#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMessageBox>
#include <QMainWindow>
#include <QMessageBox>
#include "addfilewindow.h"
#include "selecttextwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addFileButton_clicked();
    void on_infoButton_clicked();
    void on_textSelectButton_clicked();
    void on_learnModeButton_clicked();

private:
    Ui::MainWindow *ui;

    AddFileWindow *addFileWindow;
    SelectTextWindow *selectTextWindow;
};
#endif // MAINWINDOW_H
