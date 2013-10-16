#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

struct word_entry
{
  int antal;
  string ord;
};

/*void insert(string ord)
{
}*/
int main()
{ 
  string ord;
  int plats{0};
  vector<word_entry> myvector (0); 
  while(cin >> ord)
    {
      int i{0};
      transform(ord.begin(), ord.end(), ord.begin(), ::tolower);
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
  cout << "\n" << setw(10) << "Ord" << setw(12) << "Antal" <<"\n\n";
  for (plats;  plats  < myvector.size();  plats++)
    {
      cout << setw(10) << myvector[plats].ord;
      cout << setw(8) << myvector[plats].antal << "\n";
    }
  return 0  ;
}


