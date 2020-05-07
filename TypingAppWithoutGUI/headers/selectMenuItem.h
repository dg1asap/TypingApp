#ifndef SELECTMENUITEM_H 
#define SELECTMENUITEM_H 

#include "file.h"
#include "enum.h"

class SelectMenuItem{
    File newFile;// = nullptr; 

public:    
    SelectMenuItem();
    ~SelectMenuItem();
    
    void addSelectMenuItem(menu::main_menu item);
};

#endif //SELECTMENUITEM_H 
