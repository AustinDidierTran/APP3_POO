#ifndef PLATSANTE_H
#define PLATSANTE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "plats.h"
using namespace std;

class PlatSante : public PlatAuMenu{
public:
/** Methodes et attributs publiques
  Determine un plat au menu (general)
  Permet d'initialiser les attributs et de les exploiter
*/
   PlatSante ();                         ///< Constructeur de base
   PlatSante  (
        int code,
        string description,
		double prix, 
		double calories, 
		double gras, 
		double cholesterol);         ///< Constructeur avec code, description et prix
    ~PlatSante();
    void set_calories(double);
    void set_gras(double);
    void set_cholesterol(double);
    double get_calories() const;
    double get_gras() const;
    double get_cholesterol() const;

private:
   double calories, gras, cholesterol;

};

/// Determine un  plat sante 
/** \class PlatSante
  Determine un plat...
  Permet d'initialiser les plats et de les initialiser
*/

#endif //PLATS_H
