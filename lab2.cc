#include <iostream>
#include <string>
 
using namespace std;
 
int main(void){
try
 { 
  money m1;
  money m2(100);
  money m3(10, 50);
  money m4("SEK");
  money m5("SEK", 10);
  money m6("FFR", 100, 50);
  money m7(m6);
  money m8(m1);
  m1.print(cout);
  m2.print(cout);
  m3.print(cout);
  m4.print(cout);
  m5.print(cout);
  m6.print(cout);
  m7.print(cout);
  m8.print(cout);
  cout << "\n";
  m1 + m5;
  m5 + m6;
  m1.print(cout);
  m5.print(cout);
  cout << "\n";
  m4 = m5;
  m4.print(cout);
  m4 = m3;
  m4.print(cout);
  m1 = m6;
  m1.print(cout);
  m4 = m6;
  m4.print(cout);
  catch (monetary_error& e)
  return 0;
 }
}


