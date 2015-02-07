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

template <template T>

struct Node{
	T p;
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
	void ajouter(Node);
	Node* get(int);
	PlatAuMenu* getPlatAt(int);
	void delete(int);
	void deleteAll();
};


#endif //LISTE_H
