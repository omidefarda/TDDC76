#ifndef _TERRITORY_H_
#define _TERRITORY_H_

#include <string>
#include <vector>

using namespace std;

// vi har inga grannar från början så därför går inte att ha granne i kontruktor
class Territory
{
  string _name;
  vector<Territory> _neighbours;
  // vector<Piece> _pieces;
  // Player *_owner;
 public:
  Territory(const string& name);
  string get_name();
  int count_pieces();
  int count_neighbours();
  // pekare till en array
  vector<Territory> get_neighbours();
  // pekare till territory
  void add_neighbour(Territory territory);
  // void set_owner(Player *owner);

  // Player *get_owner();


};







#endif
