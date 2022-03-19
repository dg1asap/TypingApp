#ifndef DATABASE_H
#define DATABASE_H

#include "saver.h"

#include <vector>
#include <string>

class Database{
    std::vector < std::string > fileNames;
public:

    Database();

    void updataDatabase();
    void addFile( std::string fileName );
    void deleteFile ( std::string fileName );

    std::string getFileName( unsigned int index );
    int getFileNamesSize();
};

#endif // DATABASE_H
