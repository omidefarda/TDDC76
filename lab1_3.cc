#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
  int bokstav{0};
  int siffra{0};
  int punktions{0};
  int vita{0};
  int total{0};
  char c;

  cout << "Skriv din text! Avsluta med ENTER och CTRL+D\n";

  while(cin >> noskipws >> c)
    {
      if (isalpha(c))
	{ 
	  bokstav++; 
	}
      else if (isdigit(c))
	{
	  siffra++;
	}
      else if (ispunct(c))
	{
	  punktions++;
	}
      else if (isspace(c)) 
	{
	  vita++;
	}
      total++;
    }
  cout<< "Indata innehöll:\n\n";
  cout<< bokstav << " alfabetiska tecken\n";
  cout<< siffra << " siffertecken\n";
  cout<< punktions << " interpunktionstecken\n";
  cout<< vita << " vita tecken\n";
  cout<< total << " tecken totalt\n";
  return 0;
}
