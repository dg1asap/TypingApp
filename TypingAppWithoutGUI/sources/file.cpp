#include "file.h"

#include <fstream>
#include <iostream>

File::File(){
    Localisation path();
}

void File::addNewFileUI(){
    system("clear");
    std::cout << "Enter the path to the file";
    
    std::string userPath; 
    std::cin >> userPath;
    path.addPath(userPath);
}

void File::addNewFile(){
//*****************Zbieranie_informacji_o_pliku**********
    if((path.connection()) == true){
        statisticalData = new FileInfo();  
        statisticalData -> infoFromNewFile(path.returnPath());

//******************Tworzenie_Pliku**********************
        std::fstream data("../Files/data.txt", std::ios::out | std::ios::app);
        data << path.retrunFileName() << " "
             << statisticalData -> numberOfcharacter() << " "
             << statisticalData -> numberOfwords() << " "
             << statisticalData -> numberOfendOfLineCharacters() << "\n";
        data.close();
 
        std::string convertedFile = "../Files/texts/";
        convertedFile += path.retrunFileName();
 
        std::ifstream From(path.returnPath(), std::ios::binary);
        std::ofstream To(convertedFile, std::ios::binary);
 
        From >> To.rdbuf();
 
        From.close();
        To.close();
    }
}

File::~File(){
//    delete path;
 //   delete statisticalData;
};
