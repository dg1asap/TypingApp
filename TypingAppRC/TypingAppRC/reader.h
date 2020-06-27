#ifndef READER_H
#define READER_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "myexception.h"


class Reader{
public:
    void read( std::string fileName, std::vector < std::string > & newText);
};

#endif // READER_H
