#ifndef LOCALISATION_H
#define LOCALISATION_H

#include <string>

class Localisation
{
   std::string path;
   std::string fileName;
public:
    Localisation(std::string userPath);

    bool connection();
    std::string returnPath();
    std::string retrunFileName();

    ~Localisation();
};

#endif // LOCALISATION_H
