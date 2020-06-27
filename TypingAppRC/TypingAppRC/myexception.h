#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H

#include <iostream>

class MyException : public std::exception{
public:
    const char * what() const noexcept override;
};

#endif // MYEXCEPTION_H
