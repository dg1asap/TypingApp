#ifndef TEXTSELECTWINDOW_H
#define TEXTSELECTWINDOW_H

#include <QDialog>

namespace Ui {
class TextSelectWindow;
}

class TextSelectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TextSelectWindow(QWidget *parent = nullptr);
    ~TextSelectWindow();

private:
    Ui::TextSelectWindow *ui;
};

#endif // TEXTSELECTWINDOW_H
