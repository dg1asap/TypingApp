#ifndef TIMER_H 
#define TIMER_H 

#include <time.h>
#include <iostream>

class Timer{
    time_t startTime, pauseTime;
    double data = 0;

public:
    void start(){
        time( & startTime );
    }
    void stop(){
        time( & pauseTime );
        data = difftime( pauseTime, startTime );
        std::cout << "\n" << data << std::endl;
    }
};

#endif //TIMER_H
