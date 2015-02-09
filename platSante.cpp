/**
    \file  plats.cpp
    \author Equipe professorale S2
    \date 2012-01-12
    \version 01.00a 

    Classe PlatSante et associees<br>

    Ce code est a completer pour la realisation de l'iteration menufact02.<br>

    Historique de revision   (menufact01)<br>
    V01.00a  14 janv 2012  Equipe professorale S2  Creation version 2011<br>

    Copyright 2012<br>
    Departement de genie electrique et de genie informatique Universite de Sherbrooke  */

#include "platSante.h"

PlatSante::PlatSante ()
{
	if (TRACE_Plats)
		cout << "PlatSante::Constructeur,  aucun parametre" << endl;
	code = 0;
	desc = "";
	prix = 0.0;
	calories = 0;
	gras = 0;
	cholesterol = 0;
}

PlatSante::PlatSante  (int c, string s, double p, double cal, double g, double chol)
{
	if (TRACE_Plats)
		cout << "PlatSante::Constructeur,  avec parametre" << endl;
	code = c;
	desc = s;
	prix = p;
	calories = cal;
	gras = g;
	cholesterol = chol;
}

PlatSante::~PlatSante ()
{
   if (TRACE_Plats)
      cout << "PlatSante::Destructeur " << endl;
}

void PlatSante::set_calories(double c)
{	
	if (TRACE_Plats)
      		cout << "PlatSante::set_calories " << endl;
	calories = c;
	return;
}
void PlatSante::set_gras(double g)
{	
	if (TRACE_Plats)
      		cout << "PlatSante::set_gras " << endl;
	gras = g;
	return;
}
void PlatSante::set_cholesterol(double c)
{	
	if (TRACE_Plats)
      		cout << "PlatSante::set_cholesterol " << endl;
	cholesterol = c;
	return;
}
double PlatSante::get_calories () const              ///< Obtenir le prix d un PlatSante
{
   if (TRACE_Plats)
      cout << "PlatSante::get_calories " << endl;
   return calories;
}

double PlatSante::get_gras () const              ///< Obtenir le prix d un PlatSante
{
   if (TRACE_Plats)
      cout << "PlatSante::get_gras " << endl;
   return gras;
}

double PlatSante::get_cholesterol () const              ///< Obtenir le prix d un PlatSante
{
   if (TRACE_Plats)
      cout << "PlatSante::get_cholesterol " << endl;
   return cholesterol;
}

//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
