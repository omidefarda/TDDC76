#include "monetary_error.h"
#include "Monetary.h"
#include <string>
#include <iostream>
using namespace std;
//print osv
void money::print(ostream &out)
{
  out << valuta << " " << enhet << "." << hundradelar << endl;
}

//Sammansättning
money& money::operator+(money& adderare)
{
  if (valuta == adderare.valuta || valuta == "" || adderare.valuta == "")
    {
      enhet = enhet + adderare.enhet;
      hundradelar = hundradelar + adderare.hundradelar;      
    }
  else
    {
      throw monetary_error ("olika valuta");
    }
}
money& money::operator=(money& tilldelare)
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
      throw monetary_error ("olika valuta");
    }
}
//Jämförelse
bool operator=(const money&, const money&);
