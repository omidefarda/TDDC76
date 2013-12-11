#include "Territory.h"

// konstruktor
Territory::Territory(const string& name)
{
  _name=name;
}

string Territory::get_name()
{
  return _name;
}

int Territory::count_pieces()
{
  return 3; // TODO
}


vector<Territory> Territory::get_neighbours()
{
  return _neighbours;
}

void Territory::add_neighbour(Territory territory)
{
  _neighbours.push_back(territory);
}



