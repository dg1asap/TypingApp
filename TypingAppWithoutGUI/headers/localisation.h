#ifndef LOCALISATION_H
#define LOCALISATION_H

#include <string>

class Localisation
{
   std::string path_;
   std::string fileName_;
public:
    Localisation();
    ~Localisation();
    
    void addPath(std::string userPath);
    
    bool connection();

    std::string returnPath();
    std::string retrunFileName();
};

#endif // LOCALISATION_H
