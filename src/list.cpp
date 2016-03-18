#include "list.h"

List::List()
{
	head->next=NULL;
	head->m=Monom();
}

List::List(const List &l)
{
	head->next=l.head->next;
	head->m=l.head->m;
}

List::~List()
{
	Clean();
}

void List::Clean()
{
	Node *t=head;
	while (t!=NULL)
	{
		head=head->next;
		delete t;
		t=head;
	}
}

void List::SetMonom(Monom &_m)
{
	head->m=_m;
}

Monom List::GetMonom()
{
	return head->m;
}
void List::SetNext(Node *_next)
{
	head->next=_next;
}

Node* List::GetNext()
{
	return head->next;
}

List& List::operator=(List &_l)
{
	head->m=_l.GetMonom();
	return *this;
}

//---------------------------------------

IterList::IterList(List *link)
{
	cur = link->head;
}
bool IterList::HasNext()
{
	return cur!=NULL;
}
Monom& IterList::Next()
{
	Node *t;
	if (!HasNext())
	{
		throw "cur==NULL";
	}
	t=cur;
	cur=cur->next;
	return t->m;
}

void List::DelFirst()
{
	Node *t=head;
	head=head->next;
	delete t;
}