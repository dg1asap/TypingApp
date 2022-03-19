#ifndef TIMER_H
#define TIMER_H

#include <time.h>

class Timer{
    time_t startTime, stopTime;
public:
    void start();
    void stop();
    double Score();
};

#endif // TIMER_H
