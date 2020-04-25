#ifndef SELECTTEXTWINDOW_H
#define SELECTTEXTWINDOW_H

#include <QDialog>
#include <QListWidgetItem>
#include <string>

namespace Ui {
class SelectTextWindow;
}

class SelectTextWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SelectTextWindow(std::string pathToData_,
                              std::string pathToTextDirectory_,
                              QWidget *parent = nullptr);

    std::string pathToData;
    std::string pathToTextDirectory;

    ~SelectTextWindow();

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::SelectTextWindow *ui;
};

#endif // SELECTTEXTWINDOW_H
