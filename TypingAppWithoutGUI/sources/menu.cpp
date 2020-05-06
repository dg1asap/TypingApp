#include "menu.h"

Menu::Menu(){
    std::cout << "Please select option:\n"
        << "1. Select Text\n"
        << "2. Learn Mode\n"
        << "3. Add File\n"
        << "4. Info\n"
        << "5. Quit\n";
    std::cin >> item;
}

Menu::~Menu(){}

void Menu::select(){
    selectMenuItem = new SelectMenuItem(item); 
}
