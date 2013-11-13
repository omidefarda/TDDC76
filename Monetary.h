#ifndef MONETARY_H
#define MONETARY_H
#include "monetary_error.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace monetary
{
  class Money
  {
  private:
    string valuta;
    int enhet;
    int hundradelar;
  public:

    // Konstruktor utan argument
    Money()
      {
	this ->valuta="";
	this ->enhet=0;
	this ->hundradelar=0;
      }
    // Konstruktor för enbart ints
    explicit Money(int enhet, int hundradelar=0)
    {
      this ->enhet=enhet;
      this->hundradelar=hundradelar;
    }
  
    // Konstruktor för string +/- int
    explicit Money(string valuta, int enhet=0, int hundradelar=0)
    {
      this ->valuta=valuta;
      this ->enhet=enhet;
      this ->hundradelar=hundradelar;
    }
  
    // Koppieringskonstruktor
    Money(const Money&)=default;
    //money(const char*);
    ~Money() = default;
    Money& operator=(const char*);
  
    //Print x2
    void print(ostream &out);
    friend ostream& operator<<(ostream& out, const Money&);

    //Sammansättning
    Money& operator+(Money&);
    Money& operator=(Money&);

    //Jämförelse
    //Vad menas med "Implementera < och == "direkt" och definiera de övriga i termer av dess"
    //är money++/++money här nedanför "direkt" implementerade och hur skall man då definiera de överiga i dessa?
    bool operator==(Money&);
    bool operator<(Money&);

    //Stegning
    //++money
    Money& operator++()
      {
	hundradelar=hundradelar+1;
	return *this;
      }
    //money++
    Money operator++(int)
    {
      Money temp = *this;
      hundradelar=hundradelar+1;
      return temp;
    }
  };

}

#endif

