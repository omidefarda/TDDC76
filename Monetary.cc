
//#define H_monetary
//#include <monetary_error>
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
      cout << "Kan inte summera olika valutor" << endl;
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
      cout<< "HEJ"<< endl;
    }
}
//Jämförelse
bool operator=(const money&, const money&);





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
  return 0;
}




//#endif
