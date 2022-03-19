#include "typingapp.h"

std::string TypingApp::getFileNameFromDatabase( unsigned int index ){
    return mainDatabase.getFileName( index );
}

int TypingApp::getFileNamesSizeFromDatabase(){
    return mainDatabase.getFileNamesSize();
}

void TypingApp::setText( std::string fileName ){
    SelectedText.readTextFromFile( fileName );
}

int TypingApp::getNumberOfWordsSelectedText(){
    return SelectedText.numberOfWords();
}

std::string TypingApp::getWordSelectedText( unsigned int index ){
    return SelectedText.getWord( index );
}

void TypingApp::refreshDatabase(){
    mainDatabase.updataDatabase();
}

void TypingApp::addFile( std::string path ){
    mainDatabase.addFile( path );
}

void TypingApp::startTimer(){
    timer.start();
}

void TypingApp::stopTimer(){
    timer.stop();
}

double TypingApp::timerScore(){
    return timer.Score();
}
