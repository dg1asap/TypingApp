#ifndef SELECTMENUITEM_H 
#define SELECTMENUITEM_H 

#include "file.h"
#include "selecttext.h"
#include "enum.h"

class SelectMenuItem{
    File newFile;// = nullptr; 
    SelectText selectText;
public:    
    SelectMenuItem();
    ~SelectMenuItem();
    
    void addSelectMenuItem(menu::main_menu item);
};

#endif //SELECTMENUITEM_H 
