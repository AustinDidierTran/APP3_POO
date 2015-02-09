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

struct Node{
    
	PlatChoisi value;
	Node* previous;
	Node* next;	
};

class Liste
{
	Node* head;
	Node* back;
	int size;

public:
	Liste();
	void ajouter(PlatChoisi);
	Node* get(int);
	PlatChoisi getAt(int);
	void deleteAt(int);
	void deleteAll();
    int getSize();
    int findCode(int);
};


#endif //LISTE_H
