#ifndef NEWFILE_H
#define NEWFILE_H

#include "localisation.h"
#include "fileinfo.h"

class newFile
{
    FileInfo statisticalData;

public:
    newFile(std::string userPath);

    Localisation path;
    void create();

    ~newFile();
};

#endif // NEWFILE_H
