#include <time.h>
#include <iostream>

class Timer{
    time_t startTime, pauseTime;
    int data = 0;

public:
    void start(){
        time( & startTime );
    }
    void pause(){
        time( & pauseTime );
        data += difftime( pauseTime, startTime );
    }
    void stop(){
        if(startTime > pauseTime){
            pause();
        }
        std::cout << "\n" << data << std::endl;
    }
};
