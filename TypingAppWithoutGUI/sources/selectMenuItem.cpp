#include <iostream>

#include "selectMenuItem.h"

SelectMenuItem::SelectMenuItem(){
    File newFile();    
    SelectText selectText(); 
}

SelectMenuItem::~SelectMenuItem(){
    //delete newFile;
}

void SelectMenuItem::addSelectMenuItem(menu::main_menu item){
  //  do{ 
        switch(item){
            case menu::select_text:{
                selectText.showList(); 
                selectText.selectItemFromList();
                selectText.typing();
                break;
            }
            case menu::learn_mode:{
                break;
            }
            case menu::add_file:{
                do{
                    newFile.addNewFileUI();
                    newFile.addNewFile("./files/data.txt", "./files/texts/"); 
                }while(newFile.path.connection() == false);
                break;
            }
            case menu::info:{
                    std::cout << "PROE 1 zad porgramistyczne\n";
                break;
            }
            case menu::quit:{
                break;
            }
            default:{
                break;
            }                    
        };
  //  }while(item != 'q');
}
