#ifndef H_Monetary
#define H_monetary
#include <monetary_error>
#include <iostream>
#include <string>

class money
{
public:
  string valuta;
  int enhet;
  int hundradelar;
  
  money()= default; // default
  explicit money(int, int=0);//default
  explicit money(string, int=0, int=0);//default

             
  


  money(const money&);  //koppieringskonstruktor
  money(const char*);
  ~money();
  money& operator=(const char*);


  //operatoroverlagring används för att kunna använda +/- etc, även Rvalue och lvalue är för addition.

  money (string valuta, int enhet, int hundradelar)
    {
      this ->valuta=valuta;
      this ->enhet=enhet;
      this ->hundradelar=hundradelar;
    }
  money()
};




#endif
