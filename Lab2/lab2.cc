

#include <iostream>
#include <string>
#include "monetary.h"
#include <stdexcept>

using namespace std;
using namespace monetary;

void initiering();
void utskrift();
void tilldelning();
void addition();
void jamforelse();
void stegning();
 
int main(void)
{
  Money m11("SVENSKAKR");
  Money m12;
  initiering();
  utskrift();
  tilldelning();
  addition();
  jamforelse();
  stegning();
  string valuta = m11.currency();
  string valuta2 = m12.currency();
  cout << valuta << endl;
  cout << valuta2 << endl;
  return 0;
}

void initiering()
{
  try
    {
      cout << "Testar initiering" << endl;
      Money m1;
      Money m2(100);
      Money m3(10, 50);
      Money m4("SEK");
      Money m5("SEK", 10);
      Money m6("FFR", 100, 50);
      Money m7(m6);
      Money m8(m1);
    }
  catch (const monetary_error& e) 
    {
      cout << e.what() << endl;
    }  
  cout << "Fungerade" << endl;
}

void utskrift()
{
  Money m1;
  Money m3(10,50);
  Money m5("SEK", 10);
  Money m10("SEK", 10 ,9);
  try
    {
      cout << "Testar utskrift" << endl;
      m5.print(cout);
      m10.print(cout);
      cout << m5 << endl;
      cout << m3 << endl;
      cout << m1 << endl;
    }
  catch (const monetary_error& e) 
    {
      cout << e.what() << endl;
    }  
  cout << "Fungerade" << endl;
}

void tilldelning()
{
  Money m1;
  Money m3(10, 50);
  Money m4("SEK");
  Money m5("SEK", 10);
  Money m6("FFR", 100 ,50);
  try
    {
      cout << "Testar tilldelning" << endl;
      m4 = m5;
      m4 = m3;
      m1 = m6;
    }
  catch (const monetary_error& e) 
    {
      cout << e.what() << endl;
    } 
  cout << "Fungerade" << endl;
}

void addition()
{
  Money m1;
  Money m2(100);
  Money m4("SEK");
  Money m5("SEK", 10);
  try
    {
      cout << "Testar addition" << endl;
      m4 + m5;
      m4 + m1;
      m1 + m2;    
    }
  catch (const monetary_error& e) 
    {
      cout << e.what() << endl;
    }  
  cout << "Fungerade" << endl;
}

void jamforelse()
{
  Money m4 ("SEK");
  Money m5 ("SEK", 10, 50);
  Money m3 (10, 50);
  int a;
  try 
    {
      cout << "Testar Jämförelse"<< endl;
      a = m4 < m5;
      cout << "Är m4 < m5" << " " << a << endl;
      a = (m4 == m5);
      cout << "Är m4 == m5" << " " << a << endl;
      a = m3 > m5;
      cout << "Är m3 > m5"  << " " << a << endl;
      a = m3 != m5;
      cout << "är m3 != m5" << " " << a << endl;
      a = m3 >= m5;
      cout << "är m3 >= m5" << " " << a << endl;
      a = m5 <= m3;
      cout << "är m5 <= m3" << " " << a << endl;
    }
  catch (const monetary_error& e) 
    {
      cout << e.what() << endl;
    }  
  cout << "Fungerade"<< endl;
}

void stegning()
{
  Money m4("SEK");
  Money m2 (100);
  try 
    {
      cout<< "Testar stegning"<< endl;
      ++m4;
      m4++;
      ++m2;
      m2++;
    }
  catch (const monetary_error& e)
    {
      cout<< e.what()<< endl;
    }
  cout<< "Fungerade"<< endl;
}

  
