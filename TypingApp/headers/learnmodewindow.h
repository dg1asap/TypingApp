#ifndef LEARNMODEWINDOW_H
#define LEARNMODEWINDOW_H

#include <QDialog>

namespace Ui {
class LearnModeWindow;
}

class LearnModeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LearnModeWindow(QWidget *parent = nullptr);
    ~LearnModeWindow();

private:
    Ui::LearnModeWindow *ui;
};

#endif // LEARNMODEWINDOW_H
