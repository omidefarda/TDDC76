#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;
double celc(double x)
{
  return  x-273.15;
}
double fahrt(double x )
{
  return  (1.8*x)-459.67;
}


int main()
{
  double x;
  while(x!=0)
    {
      cout << "Ge en temperatur i Kelvin: ";
      cin >> x;
 
      if (x<0)
	cout << "Negativa kelvinvärden är ej tillåtna!" << "\n\n";
      else
	cout  << fixed << setprecision(2) << x << " Kelvin motsvarar " << celc(x) << " grader Celsius" << " eller "<< fahrt(x)<<" grader Fahrenheit."<< "\n\n";
    }

  cout <<"Slut.""\n";

  return 0;
}


