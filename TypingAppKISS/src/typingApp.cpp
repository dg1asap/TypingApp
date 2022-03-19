#include <iostream>
#include <fstream>
#include <string>

#include "typingApp.h"

void TypingApp::selectText(){
    system("clear"); 
    std::fstream file(pathToDatabase);
    std::cout << file.rdbuf();
    
    std::cout << "Your choice: ";
    std::string user_selectedText;
    std::cin >> user_selectedText;
    myText -> rewriteText(user_selectedText);
}

void TypingApp::addText(){
    std::string path, name;
    std::cout << "path: " << std::endl;
    std::cin >> path;
    std::cout << "name: " << std::endl;
    std::cin >> name;

    std::string path_ = "./texts/";
    path_ += name;
    
    std::ifstream database_("./data.txt");
    database_ >> name;
    //database_ << "\n";
    database_.close();

    std::ifstream From(path, std::ios::binary);
    std::ofstream To(path_, std::ios::binary);

    From >> To.rdbuf();

    From.close();
    To.close();
}
