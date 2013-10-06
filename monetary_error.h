#ifndef MONETARY_ERROR_H
#define MONETARY_ERROR_H
#include <stdexcept>

class monetary_error : public std::logic_error {
public:
   // Constructor
   monetary_error(const string msg) : std::logic_error(msg) {};
};
 
#endif

