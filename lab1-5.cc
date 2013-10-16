#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

int main ()
{
  string textfil;
  string ord;
  cin >> textfil;
  list<string> ordlista;
  fstream textfilen (textfil);
  if (textfilen.is_open())
    {
      while (getline (textfilen, ord))
	{
	  ordlista.insert(ordlista.begin(), ord);
	}
      textfilen.close();
      cout << "välj PRINT eller REVERSE_PRINT" << endl;
      cin >> ord;
      if (ord == "p")
	{
	  for ( list<string>::iterator it=ordlista.begin(); it != ordlista.end(); ++it)
	    {
	      cout << *it << endl;
	    }
	}
      else if (ord == "r")
	{
	  for ( list<string>::reverse_iterator rit=ordlista.rbegin(); rit != ordlista.rend() ; ++rit)
	    {
	      cout<< *rit<< endl;
	    }
	}
      else
	cout << "Kan inte det kommandot";
    }
  else 
    cout << "Kan inte öppna filen" << endl;
  return 0;
}
