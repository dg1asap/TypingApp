#include <fstream>
#include "../headers/fileinfo.h"

FileInfo::FileInfo(){}
FileInfo::FileInfo(int endOfLineCharacters_ , int characters_, int words_)
    : endOfLineCharacters(endOfLineCharacters_),
      characters(characters_),
      words(words_){

}

void FileInfo::infoFromNewFile(std::string path)
{
    std::ifstream userFile(path, std::ios::out);
    userFile.is_open();

    char c = 'c';                    // Nie sprawdzam dostepu poniewaz
    while(userFile.get(c))          // juz to wczesniej zrobilem.
    {
        if(c == '!' || c == '?' || c == ';' || c == '.')
        {
            endOfLineCharacters++;
        }
        if(c == ' ')
        {
            words++;
        }
        characters++;
    }

    userFile.close();
}

int FileInfo::numberOfendOfLineCharacters(){ return endOfLineCharacters;}
int FileInfo::numberOfcharacter(){ return characters;}
int FileInfo::numberOfwords(){ return words;}

FileInfo::~FileInfo(){}
