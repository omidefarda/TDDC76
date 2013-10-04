//#ifndef H_Monetary
//#define H_monetary
//#include <monetary_error>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string valuta;
int enhet;
int hundradelar;
class money
{
public:
  string valuta;
  int enhet;
  int hundradelar;

  // Konstruktor utan argument
  money()
  {
    this ->enhet=0;
    this ->hundradelar=0;      
  }
  // Konstruktor för enbart ints
  explicit money(int enhet, int hundradelar=0)
  {
    this ->enhet=enhet;
    this->hundradelar=hundradelar;
  }  
  
  // Konstruktor för string +/- int
  explicit money(string valuta, int enhet=0, int hundradelar=0)
  {
    this ->valuta=valuta;
    this ->enhet=enhet;
    this ->hundradelar=hundradelar; 
  }
  
  // Koppieringskonstruktor
  money(const money&)=default;  
  //money(const char*);
  ~money() = default;
  money& operator=(const char*);


  //operatoroverlagring används för att kunna använda +/- etc, även Rvalue och lvalue är för addition.

  /*  money (string valuta, int enhet, int hundradelar)
  {
    this ->valuta=valuta;
    this ->enhet=enhet;
    this ->hundradelar=hundradelar;
    }*/
  void print(ostream &out);
  };

//print osv
void money::print(ostream &out)
{
  out << valuta << " " << enhet << "." << hundradelar << endl;
}

int main(void)
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
  return 0;
}




//#endif
