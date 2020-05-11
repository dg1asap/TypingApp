#include <iostream>
#include <fstream>
#include <sstream>

#include "selecttext.h"

SelectText::SelectText(){
    File txt();
}

SelectText::~SelectText(){}


void SelectText::showList(){
    std::cout << "\n Select text:\n";
    std::ifstream data ("./files/data.txt", std::ios::out);
    int elements = 1;
    std::string line;
    do{
        getline(data, line);
        std::cout << elements++ << ". " << line << "\n";
    }while(!data.eof());
    data.close();
}

void SelectText::selectItemFromList(){
    int decision; 
    do{
        std::cout << "Select: "; 
        std::cin >> decision;
    }while(decision <= elements && decision >= 1);
  
    std::string line;
    int i = 0;
    std::ifstream data ("./files/data.txt", std::ios::out);
    do{
        getline(data, line);
        i++;
    }while( i < decision );
    std::cout << line << "\n";
    data.close();
    
    std::istringstream line_(line);
    std::string name;
    int e, c, w;
    line_ >> name >> e >> w >> c; 
    txt.statisticalData.addInfo(e, c, w);

    std::string fullPath = "./files/texts/" + name;
    txt.path.addPath(fullPath); 
}

void SelectText::typing(){
    std::string line;
    std::ifstream text(txt.path.returnPath(), std::ios::out);
    timer.start(); 
    std::string userLine;
    do{
        getline(text, line);
        do{  
            std::cout << line << "\n";
            std::cin >> userLine;
            system("clear");
            //line.erase(line.size()-1,1);
            //std::cout << "+" << line << "+";
        }while(line != userLine);
    }while(!text.eof());
    timer.stop();
}
