#include "timer.h"

void Timer::start(){
    time( & startTime );
}

void Timer::stop(){
    time( & stopTime );
}

double Timer::Score(){
    return difftime( stopTime, startTime );
}
