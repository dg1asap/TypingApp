#include "file.h"

#include <fstream>
#include <iostream>

File::File(){
    Localisation path();
    FileInfo statisticalData();
}

void File::addNewFileUI(){
    system("clear");
    std::cout << "Enter the path to the file: ";
    
    std::string userPath; 
    std::cin >> userPath;
    path.addPath(userPath);
}

void File::addNewFile(std::string pathToData, std::string pathToDirectory){
//*****************Zbieranie_informacji_o_pliku**********
    if((path.connection()) == true){
        statisticalData.infoFromNewFile(path.returnPath());

//******************Tworzenie_Pliku**********************
        std::fstream data(pathToData, std::ios::out | std::ios::app);
        data << path.returnFileName() << " "
             << statisticalData.numberOfcharacter() << " "
             << statisticalData.numberOfwords() << " "
             << statisticalData.numberOfendOfLineCharacters() << "\n";
        data.close();

        std::string pathToFileInData = pathToDirectory + path.returnFileName();
 
        std::ifstream From(path.returnPath(), std::ios::binary);
        std::ofstream To(pathToFileInData, std::ios::binary);
 
        From >> To.rdbuf();
 
        From.close();
        To.close();
    }
}

File::~File(){
//    delete path;
    //delete statisticalData;
};
