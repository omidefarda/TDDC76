#include <iostream>
#include "Territory.h"
using namespace std;

void print_neighbours(Territory t);

int main()
{
  Territory A("Ahuset");
  Territory B("Bhuset");
  
  
  cout << A.get_name() << endl;
  cout << B.get_name() << endl;
  
  A.add_neighbour(B);
  
  print_neighbours(A);
  print_neighbours(B);
}

void print_neighbours(Territory t)
{
  vector<Territory> neighbours=t.get_neighbours();
  for (unsigned int i = 0; i < neighbours.size(); i++)
    {
      Territory neighbour = neighbours[i];
      cout << t.get_name() << " neighbour: " << neighbour.get_name() << endl;
    }
}

