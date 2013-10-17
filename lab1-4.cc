/*
  Filnamn: Lab1-4.cc
  
  Beskrivning: Tar in de ord som skrivs och sätter in dessa i alfabetiska 
  ordning i en ordlista. Räknar även antal gånger samma ord har skrivits.
  Omvandlar även alla stora bokstäver till små innan de sätts in i listan.

  Skriven av: Mats & Hassan
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

//Enkel struct som håller reda på antal gånger ett ord har skrivits.
struct word_entry
{
  int antal;
  string ord;
};

//Vector av word_entry typ, startar tom.
vector<word_entry> myvector (0);

// Sätter in ordet i vectorn myvector.
void insert(string ord)
{
  int i{0};
  word_entry b;
  b.ord = ord;
  b.antal = 1;
  if (myvector.empty())
    {
      myvector.insert(myvector.begin(), b);
    }
  else
    {
      while ((myvector.size() != (i+1)) && (myvector[i].ord < ord))
	{
	  i++;
	}
      if(ord == myvector[i].ord)
	{
	  myvector[i].antal++;
	}
      else if (myvector[i].ord < ord)
	{
	  myvector.insert (myvector.end(), b);
	}
      else
	{
	  myvector.insert (myvector.begin()+i, b);
	}
    }
}

//Funktionen print, tar inga argument utan skriver direkt från den globala 
//vektorn myvector.
void print()
{
  cout << "\n" << setw(10) << "Ord" << "  " << "Antal" <<"\n\n";
  for (int plats = 0; plats < myvector.size(); plats++)
    {
      cout << setw(10) << myvector.at(plats).ord;
      cout << "  " << myvector.at(plats).antal << "\n";
    }
}

int main()
{
  string ord;
  while(cin >> ord)
    {
      //Omvandlar stora bokstäver till små.
      transform(ord.begin(), ord.end(), ord.begin(), ::tolower);
      insert(ord);
    }
  print();
  return 0 ;
}
