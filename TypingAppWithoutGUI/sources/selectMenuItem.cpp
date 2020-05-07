#include "selectMenuItem.h"

SelectMenuItem::SelectMenuItem(menu::main_menu item){
    switch(item){
        case menu::select_text:{
            break;
        }
        case menu::learn_mode:{
            break;
        }
        case menu::add_file:{
            newFile = new File(); 
            do{
                newFile -> addNewFileUI();
                newFile -> addNewFile(); 
            }while(newFile -> statisticalData ==  nullptr);
            break;
        }
        case menu::info:{
            break;
        }
        case menu::quit:{
            break;
        }
        default:{
            break;
        }                    
    };
}

SelectMenuItem::~SelectMenuItem(){
    delete newFile;
}
