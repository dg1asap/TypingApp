#ifndef FILE_H
#define FILE_H

#include "localisation.h"
#include "fileinfo.h"

class File{
public:
    File();
    ~File();
    
    Localisation path;
    FileInfo statisticalData;// = nullptr;
    
    void addNewFileUI();
    void addNewFile();
};

#endif // FILE_H
