
#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <string>

using namespace std;

class list
{ 
 public:
  struct List_Node
  {
    string name;
    struct node *next;
  } *current;
  list();//konstruktur
  ~list();//destruktur
  
  void addNode( struct list::node*);
};

#endif
