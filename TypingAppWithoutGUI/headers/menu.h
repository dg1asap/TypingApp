#ifndef MENU_H
#define MENU_H

#include "selectMenuItem.h"

class Menu{
    menu::main_menu item;

    SelectMenuItem selectMenuItem;// = nullptr;

public:
    Menu();
    ~Menu();

    void show();
    void select();
};

#endif //MENU_H

