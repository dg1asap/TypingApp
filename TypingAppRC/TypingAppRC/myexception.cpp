#include "myexception.h"

const char * MyException::what() const noexcept{
    return "Failed path" ;
}
