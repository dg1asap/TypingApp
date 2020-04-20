#ifndef ADDFILEWINDOW_H
#define ADDFILEWINDOW_H

#include <QDialog>

namespace Ui {
class AddFileWindow;
}

class AddFileWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddFileWindow(QWidget *parent = nullptr);
    ~AddFileWindow();

private slots:
    void on_addButton_clicked();

private:
    Ui::AddFileWindow *ui;
};

#endif // ADDFILEWINDOW_H
