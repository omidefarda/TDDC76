#include "monetary.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include <initializer_list>
using namespace std;

namespace monetary
{
  //print osv
  void Money::print(ostream &out)
  {
    if (hundradelar > 9)
      {
	out << valuta << " " << enhet << "." << hundradelar;
      }
    else
      {
	out << valuta << " " << enhet << ".0" << hundradelar;
      }
  }

  ostream& operator<<(ostream& os,const Money& money_print)
  {
    os << money_print.valuta << " " << money_print.enhet << "." << money_print.hundradelar;
    return os;
  }

  //Sammansättning +
  const Money& Money::operator+(Money& adderare)
  {
    if (valuta == adderare.valuta || valuta == "" || adderare.valuta == "")
      {
     	enhet = enhet + adderare.enhet;
	hundradelar = hundradelar + adderare.hundradelar;
      }
    else
      {
	throw monetary_error{"Fel! Olika valuta"};
      }
  }
  //Sammansättning =
  Money& Money::operator=(Money& tilldelare)
  {
    if (valuta==tilldelare.valuta || tilldelare.valuta=="")
      {
	enhet= tilldelare.enhet;
	hundradelar=tilldelare.hundradelar;
      }
    else if(valuta=="")
      {
	valuta=tilldelare.valuta;
	enhet= tilldelare.enhet;
	hundradelar=tilldelare.hundradelar;
      }
    else
      {
	throw monetary_error {"Fel! Kan inte sammansätta två olika valutor"};
      }
    return *this;
  }

  //Stegning money++
  Money& Money::operator++()
  {
    hundradelar=hundradelar+1;
    return *this;
  }
  //Stegning ++money
  const Money Money::operator++(int)
  {
    Money temp = *this;
    operator++();
    return temp;
  }

  //Jämförelse
  bool Money::operator < (const Money& mindre)
  {
    if (valuta == mindre.valuta || valuta == "" || mindre.valuta == "")
      {
	if(enhet < mindre.enhet)
	  {
	    return (enhet < mindre.enhet);
	  }
	else
	  {
	    return (enhet <= mindre.enhet && hundradelar < mindre.hundradelar);
	  }
      }
    else
      {
	throw monetary_error("Fel! Kan inte jämföra två olika valutor1");
      }
  }
  
  bool Money::operator==(const Money& likamed)
  {
    if (valuta == likamed.valuta || valuta == "" || likamed.valuta == "")
      {
	return (enhet == likamed.enhet && hundradelar == likamed.hundradelar);
      }
    else 
      {
	throw monetary_error("Fel! Kan inte jämföra två olika valutor2");
      }
  }

  bool Money::operator > (const Money& storre)
  {
    return(!operator<(storre) && !operator==(storre));
  }
    
  bool Money::operator != (const Money& intelikamed)
  {
    return (!operator==(intelikamed));
  }

  bool Money::operator >= (const Money& storrelikamed)
  {
    return (!operator<(storrelikamed) || operator==(storrelikamed));
  }
  
  bool Money::operator <= (const Money& mindrelikamed)
  {
    return (operator<(mindrelikamed) || operator==(mindrelikamed));
  }

  string Money::currency()
  {
    return valuta;
  }      
}

