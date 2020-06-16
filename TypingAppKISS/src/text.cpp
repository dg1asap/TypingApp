#include <iostream> 
#include <fstream>
#include <string>
#include <memory>
#include <time.h>

#include "text.h"

void Text::rewriteText(std::string nameOfText){
    std::string pathToText = "./texts/";
    pathToText += nameOfText;
    std::fstream file(pathToText); 
    
    std::string word, userWord;
    int word_ = 0;
  
    time_t startTime, stopTime;
    time( & startTime );
    double data = 0;
    while(file >> word){
        do{
            system("clear");
            std::cout << word << std::endl;
            std::cin >> userWord;
        }while(word != userWord);
        word_++;
    }
        time( & stopTime );
        data = difftime( stopTime, startTime );
        double wpm = (word_ / data) * 60 ;
        std::cout << "\n" << wpm << std::endl;

    file.close();
}
