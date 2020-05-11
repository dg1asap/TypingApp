#ifndef SELECTTEXT_H
#define SELECTTEXT_H

#include "file.h"
#include "timer.h"

class SelectText{
    File txt;
    Timer timer;
public:
    SelectText();
    ~SelectText();

    int elements; 
    
    void showList();
    void selectItemFromList();
    void typing();
};

#endif // SELECTTEXT_H
