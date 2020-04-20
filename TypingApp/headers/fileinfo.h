#ifndef FILEINFO_H
#define FILEINFO_H

#include <string>

class FileInfo
{
    int endOfLineCharacters = 0;         // ! ? . ;
    int characters = 0;
    int words = 0;
public:
    FileInfo();

    void infoFromNewFile(std::string path);
    int numberOfendOfLineCharacters();
    int numberOfcharacter();
    int numberOfwords();

    ~FileInfo();
};

#endif // FILEINFO_H
