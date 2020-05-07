#ifndef SELECTMENUITEM_H 
#define SELECTMENUITEM_H 

#include "file.h"
#include "enum.h"

class SelectMenuItem{
    File * newFile = nullptr; 

public:    
    SelectMenuItem(menu::main_menu item);
    ~SelectMenuItem();
};

#endif //SELECTMENUITEM_H 
