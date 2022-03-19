#ifndef NEWFILE_H
#define NEWFILE_H

#include <headers/localisation.h>
#include <headers/fileinfo.h>

class newFile
{
    FileInfo statisticalData;

public:
    newFile(std::string userPath);

    Localisation path;   //Musi byc publiczna poniewaz korzysta z niej
    void create();       // addfilewindow -> newfile -> localisation

    ~newFile();
};

#endif // NEWFILE_H
