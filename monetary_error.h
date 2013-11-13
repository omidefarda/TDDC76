#ifndef MONETARY_ERROR
#define MONETARY_ERROR
#include <stdexcept>
#include <string>
using namespace std;

cout << "HEJ" << endl;
namespace monetary
{
class monetary_error : public logic_error 
{
 public:
  explicit monetary_error(const string& what_arg) noexcept
    : logic_error{what_arg}{}
  
  explicit monetary_error(const char* what_arg) noexcept
    : logic_error{what_arg} {}
};

}
#endif
