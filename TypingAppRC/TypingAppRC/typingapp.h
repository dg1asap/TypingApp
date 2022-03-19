#ifndef TYPINGAPP_H
#define TYPINGAPP_H

#include "database.h"
#include "text.h"
#include "timer.h"

class TypingApp{
    Database mainDatabase;
    Text SelectedText;
    Timer timer;

public:
    std::string getFileNameFromDatabase( unsigned int index );
    int getFileNamesSizeFromDatabase();

    void setText( std::string fileName );
    int getNumberOfWordsSelectedText();
    std::string getWordSelectedText( unsigned int index );
    void refreshDatabase();

    void addFile( std::string path );

    void startTimer();
    void stopTimer();
    double timerScore();
};

#endif // TYPINGAPP_H
