#ifndef MONETARY_H
#define MONETARY_H
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>

using namespace std;

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
    ~Money() = default;
  
    //Print x2
    void print(ostream &out);
    friend ostream& operator<<(ostream& out, const Money&);

    //Sammansättning
    const Money& operator+(Money&);
    Money& operator=(Money&);

    //Jämförelse
    bool operator < (const Money&);
    bool operator == (const Money&);
    bool operator > (const Money&);
    bool operator != (const Money&);
    bool operator >= (const Money&);
    bool operator <= (const Money&);

    //Stegning
    //++money
    Money& operator++();
    //money++
    const Money operator++(int);

    //Medlemsfunktion, skall returnera valutaenhet
    string currency();
  };



}

#endif
