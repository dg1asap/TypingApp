#include <iostream>
#include "typingApp.h" 

int main(){
    TypingApp myTypingApp; //Zmień na smart pointera!! 
    int decision = 0;
    system("clear");
    std::cout << "Select options:" << std::endl
        << "1. START" << std::endl
        << "2. Enter the text to the database" << std::endl;

    for(;;){
        std::cin >> decision;  
        if(decision == 1)
            myTypingApp.selectText();
        else if(decision == 2)
            myTypingApp.addText(); 
        else
            std::cout << "Please, select again.\n";
    }
return 0;
}
