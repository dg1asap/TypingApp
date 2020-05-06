#ifndef MENU_H
#define MENU_H

#include <iostream>

#include "selectMenuItem.h"

class Menu{
    char item = ' ';

    SelectMenuItem * selectMenuItem;
    
public:
    Menu();
    ~Menu();

    void select();

};

#endif //MENU_H

