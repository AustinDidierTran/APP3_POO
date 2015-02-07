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
	bool payer;

public:
	Facture();
	void init();
	void ajouterPlat(int, string, double, int);
	void afficher();
	void modifier();
	void fermer();
	void reouvrir();
	void payer();	
	
};

#endif //FACTURE_H
