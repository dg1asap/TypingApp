#include <fstream>
#include "../headers/newfile.h"

newFile::newFile(std::string userPath) : path(userPath){
    FileInfo statisticalData();
}

void newFile::create(){
    statisticalData.infoFromNewFile(path.returnPath());

    std::fstream data("../files/textsInfo.txt", std::ios::out | std::ios::app);     //app - nadpisywanie
    data << path.retrunFileName() << " "
         << statisticalData.numberOfcharacter() << " "
         << statisticalData.numberOfwords() << " "
         << statisticalData.numberOfendOfLineCharacters() << "\n";
    data.close();

    std::string convertedFile = "../files/texts/";
    convertedFile += path.retrunFileName();

    std::ifstream From(path.returnPath(), std::ios::binary);
    std::ofstream To(convertedFile, std::ios::binary);

    From >> To.rdbuf();

    From.close();
    To.close();
}

newFile::~newFile(){};
