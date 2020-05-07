#include "localisation.h"
#include <iostream>
#include <fstream>

Localisation::Localisation(){}

void Localisation::addPath(std::string userPath){
    path_ = userPath;
    char c = ' ';
    int i = (path_.length());

    while(c != '/'){
        c = path_[--i];
    }

    while(i != path_.length() ){
        fileName_+=path_[i+1];
        i++;
    }
}

bool Localisation::connection(){
    std::ifstream userFile (path_, std::ios::in | std::ios::out);
    if(userFile.good()){
        userFile.close();
        return true;
    }else{
        return false;
    }
}

std::string Localisation::returnPath(){
    return path_;
}

std::string Localisation::retrunFileName(){
    return fileName_;
}

Localisation::~Localisation(){}

