#ifndef SELECTTEXTWINDOW_H
#define SELECTTEXTWINDOW_H

#include <QDialog>

namespace Ui {
class SelectTextWindow;
}

class SelectTextWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SelectTextWindow(QWidget *parent = nullptr);
    ~SelectTextWindow();

private slots:
    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::SelectTextWindow *ui;
};

#endif // SELECTTEXTWINDOW_H
