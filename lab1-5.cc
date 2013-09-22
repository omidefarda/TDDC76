#include "list.h"
#include <string>
#include <iostream>
using namespace std;

int main ()
{
  string namn;
  list namnlista;
  list::node* ptr;
  ptr = namnlista.name(Ada);
  namnlista.addnode(ptr);
  ptr = namnlista.name(Beda);
  namnlista.addnode(ptr);
  while(cin >> namn)
    {
      ptr = namnlista.name(namn);
      namnlista.addnode(ptr);
    
    } 
