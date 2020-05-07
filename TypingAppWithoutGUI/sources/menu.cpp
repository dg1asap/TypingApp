#include <iostream>

#include "menu.h"

Menu::Menu(){
    SelectMenuItem selectMenuItem();
}

Menu::~Menu(){}

void Menu::show(){
    std::cout << "Please select option:\n"
        << "1. Select Text\n"
        << "2. Learn Mode\n"
        << "3. Add File\n"
        << "4. Info\n"
        << "5. Quit\n";
    char c = ' ';
    std::cin >> c;
    item = static_cast<menu::main_menu>(c);
}

void Menu::select(){
    selectMenuItem.addSelectMenuItem(item); 
}
