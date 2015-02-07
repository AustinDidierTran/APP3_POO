/**
    \file  plats.cpp
    \author Equipe professorale S2
    \date 2012-01-12
    \version 01.00a 

    Classe PlatChoisi et associees<br>

    Ce code est a completer pour la realisation de l'iteration menufact02.<br>

    Historique de revision   (menufact01)<br>
    V01.00a  14 janv 2012  Equipe professorale S2  Creation version 2011<br>

    Copyright 2012<br>
    Departement de genie electrique et de genie informatique Universite de Sherbrooke  */

#include "plats.h"

void PlatChoisi::afficher (ostream & sortie) const        ///< fichier sortie
{
   if (TRACE_Plats)
      sortie << "Liste_plat::afficher" <<  ", ";
   sortie << "code = " << code << ", ";
   sortie << "prix = " << prix << ", ";
   sortie << " (" << desc << " )" << endl;
   return;
}

void PlatChoisi::afficher_sommaire (ostream & os) const        ///< fichier sortie
{
   if (TRACE_Plats)
      os << "Liste_plat::afficher" <<  ", ";
   os << setiosflags( ios::fixed);
   os << setiosflags( ios::right);
   os << setprecision(2);
   os << " code  = " << code << ", ";
   os << " prix  = " << prix << ", "<< endl;
   return;
}

PlatChoisi::PlatChoisi ()
{
   if (TRACE_Plats)
      cout << "PlatChoisi::Constructeur,  aucun parametre" << endl;
   code = 0;
   desc = "";
   prix = 0.0;
}

PlatChoisi::PlatChoisi  (int c, string s, double p, int q)
{
   if (TRACE_Plats)
      cout << "PlatChoisi::Constructeur,  avec parametre" << endl;
   code = c;
   desc = s;
   prix = p;
	quantite = q;
}

PlatChoisi::~PlatChoisi ()
{
   if (TRACE_Plats)
      cout << "PlatChoisi::Destructeur " << endl;
}

void PlatChoisi::set_prix (double p)              ///< prix d un PlatChoisi
{
   if (TRACE_Plats)
      cout << "PlatChoisi::set_prix " << endl;
   prix = p;
   return;
}

void PlatChoisi::set_code (int  c)      ///< Code d un PlatChoisi
{
   if (TRACE_Plats)
      cout << "PlatChoisi::set_code " << endl;
   code = c;
   return;
}

void PlatChoisi::set_desc (string s)              ///< Description d un PlatChoisi
{
   if (TRACE_Plats)
      cout << "PlatChoisi::set_desc " << endl;
   desc = s;
   return;
}
void PlatChoisi::set_quantite(int q){
	if (TRACE_Plats)
      cout << "PlatChoisi::set_quantite " << endl;
   quantite = q;;
   return;
}
double PlatChoisi::get_prix () const              ///< Obtenir le prix d un PlatChoisi
{
   if (TRACE_Plats)
      cout << "PlatChoisi::get_prix " << endl;
   return prix;
}

int PlatChoisi::get_code ()  const    ///< Obtenir le code d un PlatChoisi
{
   if (TRACE_Plats)
      cout << "PlatChoisi::set_code " << endl;
   return code;
}

string PlatChoisi::get_desc () const             ///< Obtenir la description d un PlatChoisi
{
   if (TRACE_Plats)
      cout << "PlatChoisi::set_desc " << endl;
   return desc;
}
int PlatChoisi::get_quantite() const
{
	return quantite;
}
void PlatChoisi::afficher(){
	
	cout << "Code:  " << code << ", prix: " << prix * quantite << endl;
	
}
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
