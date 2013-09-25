list::~list()
{
  node *current, *temp;
  current=ptr;
  temp=ptr;
  while (ptr!=NULL)
    {
    current = current->next;
    delete temp;
    temp = current;
    }
}

void list::addnode(string namn)
{
  struct List_Node *newnode;
  newnode->name = namn;
  if (head == NULL)
    {
    head = newnode;
    }
  ptr->next = newnode;
  newnode->next = nullptr;
  ptr = newnode
}

void list::print()
{
  struct List_Node *printnode;
  printnode=head;
  while (printnode-> != nullptr)
    {
      cout << printnode->name << endl;
      printnode = printnode->next
    }
}

void list::reverse()
{
  struct List_Node *temp;
  ptr = head
  temp = head->next;
  head->next=nullptr;
  temp->next = head;
  while(temp->next != nullptr)
    {
      head=temp;
      temp = temp->next;
      temp->next = head;
    }
  head = temp;
}

void list::print_reversed()
{
  list::reverse;
  list::print;
  list::reverse;    
}

void list::clear()
{
  struct List_Node *temp;
  temp=head;
  ptr=head->next;
  while (ptr->next != nullptr)
    {
      delete temp;
      temp=ptr;
      ptr = ptr->next;	
    }
  delete temp;
  delete ptr;
  head->next = nullptr;
  
    
	
    
  
