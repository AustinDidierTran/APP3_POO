//!  Definition de classes
/**
    \file  facture.h
    \author xxxxx
    \date AAAA-MM-JJ
    \version 1.00
  
    A developper pour menufact02    
*/

#ifndef LISTE_H
#define LISTE_H

/// Determine une Facture (a developper pour menufact02) ...
/** \class Facture
  A developper ...
*/
#include <iostream>
#include "platChoisi.h"

using namespace std;

class Node{
public:
	PlatChoisi value;
	Node* previous;
	Node* next;
    void operator=(Node*);
};

class Liste
{
	Node* head;
	Node* back;
	int size;

public:
	Liste();
	void add(PlatChoisi);
    void addAt(PlatChoisi, int);
	Node* get(int);
    int getAtCode(int);
	PlatChoisi getAt(int);
    void sortByCode();
	void deleteAt(int);
	void deleteAll();
    int getSize();
    int findCode(int);
    void swap(Node*, Node*);
};


#endif //LISTE_H
