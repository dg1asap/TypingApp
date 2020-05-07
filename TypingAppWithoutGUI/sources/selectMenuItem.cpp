#include "selectMenuItem.h"

SelectMenuItem::SelectMenuItem(){
    File newFile();    
}

SelectMenuItem::~SelectMenuItem(){
    //delete newFile;
}

void SelectMenuItem::addSelectMenuItem(menu::main_menu item){
    switch(item){
        case menu::select_text:{
            break;
        }
        case menu::learn_mode:{
            break;
        }
        case menu::add_file:{
            do{
                newFile.addNewFileUI();
                newFile.addNewFile(); 
            }while(newFile.path.connection() == false);
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
