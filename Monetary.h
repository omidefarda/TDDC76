#ifndef MONETARY_H
#define MONETARY_H
#include "monetary_error.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class money
{
private:
  string valuta;
  int enhet;
  int hundradelar;
public:

  // Konstruktor utan argument
  money()
  {
    this ->valuta="";
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
  
  //Print med ostream
  void print(ostream &out);
  
  //Sammansättning
  money& operator+(money&);
  money& operator=(money&);

  //Jämförelse
  bool operator==(money&);
  bool operator<(money&);
};



#endif
