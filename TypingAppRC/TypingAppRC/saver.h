#ifndef SAVER_H
#define SAVER_H

#include <string>
#include <fstream>

#include "myexception.h"

class Saver{
public:
    void save( std::string path);
};

#endif // SAVER_H
