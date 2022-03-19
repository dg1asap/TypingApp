#include "text.h"

void Text::readTextFromFile( std::string fileName ){
    Reader reader;
    reader.read( fileName, words);
}

int Text::numberOfWords(){
   return words.size();
}

std::string Text::getWord( unsigned int index ){
    return words.at( index );
}
