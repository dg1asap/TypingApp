#ifndef TEXT_H
#define TEXT_H

#include <vector>
#include <string>
#include <QMessageBox>

#include "reader.h"

class Text{
    std::vector < std::string > words;
public:
    void readTextFromFile( std::string fileName );
    int numberOfWords();
    std::string getWord( unsigned int index );
};

#endif // TEXT_H
