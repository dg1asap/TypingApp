#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QListWidgetItem>
#include <QMessageBox>

#include <string>
#include <sstream>

#include "typingapp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    TypingApp typingApp;

    void refreshDatabase();

    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_addButton_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);
    void on_lineEdit_returnPressed();
    void on_pushButton_clicked();
    void on_typingBackButton_clicked();

private:
    Ui::Dialog *ui;
    QStringListModel * model;
};
#endif // DIALOG_H
