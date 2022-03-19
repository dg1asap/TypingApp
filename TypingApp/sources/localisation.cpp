#include "../headers/localisation.h"
#include <iostream>
#include <fstream>

Localisation::Localisation(std::string userPath) : path(userPath)
{
    char c = ' ';
    int i = (path.length());

    while(c != '/'){
        c = path[--i];
    }

    while(i != path.length() ){
        fileName+=path[i+1];
        i++;
    }
}

bool Localisation::connection()
{
    std::ifstream userFile (path, std::ios::in | std::ios::out);
    if(userFile.good()){
        userFile.close();
        return true;
    }else{
        return false;
    }
}

std::string Localisation::returnPath()
{
    return path;
}

std::string Localisation::retrunFileName()
{
    return fileName;
}

Localisation::~Localisation(){}

