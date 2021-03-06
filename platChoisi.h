//!  Definition de classes
/**
    \file  facture.h
    \author xxxxx
    \date AAAA-MM-JJ
    \version 1.00
  
    A developper pour menufact02    
*/

#ifndef PLATCHOISI_H
#define PLATCHOISI_H

/// Determine une Facture (a developper pour menufact02) ...
/** \class Facture
  A developper ...
*/
#include "plats.h"

class PlatChoisi : public PlatAuMenu
{
	int quantite;
	public:
    PlatChoisi(int, string, double, int);
    ~PlatChoisi();
	void afficher();
	int get_quantite();
	void set_quantite(int);
    int getCode();
};



#endif //LISTE_H
