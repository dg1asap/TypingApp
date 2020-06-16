#ifndef TYPINGAPP_H
#define TYPINGAPP_H

#include <fstream>
#include <string>
#include <memory>

#include "text.h"
                      //spytaj o SOLID vs yagni  
class TypingApp{
    std::string pathToDatabase = "./data.txt";
public:
    std::unique_ptr<Text> myText; //(new Text()); 

    void selectText();
    void addText();
};

#endif //TYPINGAPP_H
