#include "menu.h"

Menu::Menu(){}

Menu::~Menu(){}

void Menu::show(){
    std::cout << "Please select option:\n"
        << "1. Select Text\n"
        << "2. Learn Mode\n"
        << "3. Add File\n"
        << "4. Info\n"
        << "5. Quit\n";
    std::cin >> item;
    
    selectMenuItem = new SelectMenuItem(item); 

}
