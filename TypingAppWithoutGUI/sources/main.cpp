#include "menu.h"

int main(){
    Menu menu;    
   
    for(;;){
        menu.show();
        menu.select();    
    }
    
    return 0;
}
