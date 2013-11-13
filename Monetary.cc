#include "monetary_error.h"
#include "monetary.h"
#include <string>
#include <iostream>
using namespace std;

namespace monetary
{
  //print osv
  void Money::print(ostream &out)
  {
    out << valuta << " " << enhet << "." << hundradelar;
  }

  //Sammansättning
  Money& Money::operator+(Money& adderare)
  {
    if (valuta == adderare.valuta || valuta == "" || adderare.valuta == "")
      {
	enhet = enhet + adderare.enhet;
	hundradelar = hundradelar + adderare.hundradelar;
      }
    else
      {
	throw monetary_error{"olika valuta"};
      }
    return *this;
  }
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
	throw monetary_error("olika valuta");
      }
    return *this;
  }
  ostream& operator<<(ostream& os,const Money& money_print)
  {
    os << money_print.valuta << " " << money_print.enhet << "." << money_print.hundradelar;
    return os;
  }

}

//Jämförelse
//bool operator=(const money&, const money&);

