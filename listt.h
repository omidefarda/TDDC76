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
  } *ptr,*head;
  list();//konstruktur
  ~list();//destruktur
  
  void addnode(string namn);
  void print();
  void print_revesed();
  void reverse();
  void clear();
	     
};

#endif
