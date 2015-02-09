//!  Definition de classes
/**
    \file  facture.h
    \author xxxxx
    \date AAAA-MM-JJ
    \version 1.00
  
    A developper pour menufact02    
*/

#ifndef FACTURE_H
#define FACTURE_H
#include <string>
#include <iostream>
#include "platChoisi.h"
#include "liste.h"

using namespace std;

/// Determine une Facture (a developper pour menufact02) ...
/** \class Facture
  A developper ...
*/

class Facture
{
	string description;
	string date;
	Liste plats;
	bool ouverte;
	double soustotal;
	double tps;
	double tvq;
	double total;
	bool paid;
    int indicePlatCourant;

public:
	Facture();
	void init(string description, string date);
	void ajouterPlat(int, string, double, int);
    void miseAJourPrix();
	void afficher();
	void modifier();
	void fermer();
	void reouvrir();
	void pay();
    void retirerPlatAt(int);
    bool isOuverte();
	
};

#endif //FACTURE_H
