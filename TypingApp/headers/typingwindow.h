#ifndef TYPINGWINDOW_H
#define TYPINGWINDOW_H

#include <QDialog>
#include "../headers/fileinfo.h"
#include "../headers/localisation.h"

namespace Ui {
class TypingWindow;
}

class TypingWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TypingWindow(FileInfo  fileInfoInData_,
                          Localisation pathToFileInData_,
                          QWidget *parent = nullptr);
    FileInfo fileInfoInData;
    Localisation  pathToFileInData;

    ~TypingWindow();

private:
    Ui::TypingWindow *ui;
};

#endif // TYPINGWINDOW_H
