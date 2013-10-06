#ifndef MONETARY_ERROR_H
#define MONETARY_ERROR_H
#include <stdexcept>
#include <string>
using namespace std;

class monetary_error : public logic_error {
public:
   // Constructor
   monetary_error(const string& msg) : logic_error(msg) {};
};
 
#endif

