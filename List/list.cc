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

struct list::node* list::initnode(string namn)
{
  struct node *ptr = new node;
  ptr->name = namn;
  return ptr;
}

void list::addnode(struct node *newnode)
{
  newnode->next = nullptr;
}
