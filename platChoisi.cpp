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

#include "platChoisi.h"
PlatChoisi::PlatChoisi(int c, string s, double p, int q)
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
void PlatChoisi::afficher(){
	
	cout << "Code:  " << code << ", prix: " << prix * quantite << endl;
	
}
int PlatChoisi::get_quantite(){
    return quantite;
}
void PlatChoisi::set_quantite(int a){
    quantite = a;
}
int PlatChoisi::getCode(){
    return code;
}
//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
