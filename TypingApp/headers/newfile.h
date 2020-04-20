#ifndef NEWFILE_H
#define NEWFILE_H

#include <headers/localisation.h>
#include <headers/fileinfo.h>

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
