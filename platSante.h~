#ifndef PLATSANTE_H
#define PLATSANTE_H

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const bool TRACE_Plats = false;          ///< Activer une trace sur cout (deboguage systematique)

class PlatSante : public PlatAuMenu{ 
public:
/** Methodes et attributs publiques
  Determine un plat au menu (general)
  Permet d'initialiser les attributs et de les exploiter
*/
   PlatSante ();                         ///< Constructeur de base
   PlatSante  (	int code,
                string description, 
		double prix, 
		double calories, 
		double gras, 
		double cholesterol);         ///< Constructeur avec code, description et prix 
private:
   double calories, gras, cholesterol;

};

/// Determine un  plat sante 
/** \class PlatSante
  Determine un plat...
  Permet d'initialiser les plats et de les initialiser
*/

#endif //PLATS_H
