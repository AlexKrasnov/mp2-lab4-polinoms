#pragma once
#include "monom.h"
#include <iostream>


struct Node
{
public:
	Monom m;
	Node *next;
	Node():m(Monom()),next(NULL){};
	Node(Monom cm, Node *cnext):m(Monom()),next(cnext){};
};

class List
{
public:
	Node *head;
	List();
	List(const List &l);
	~List();
	void Clean();
	void SetMonom(Monom &_m);
    Monom GetMonom();
	void SetNext(Node *_next);
	Node* GetNext();
	List& operator=(List &_l);
	void DelFirst();
};

class IterList
{
	Node *cur;
public:
	IterList(List *link);
	bool HasNext();
	Monom &Next();
};
