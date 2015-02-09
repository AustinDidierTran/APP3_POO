/**
    \file  plats.cpp
    \author Equipe professorale S2
    \date 2012-01-12
    \version 01.00a 

    Classe PlatAuMenu et associees<br>

    Ce code est a completer pour la realisation de l'iteration menufact02.<br>

    Historique de revision   (menufact01)<br>
    V01.00a  14 janv 2012  Equipe professorale S2  Creation version 2011<br>

    Copyright 2012<br>
    Departement de genie electrique et de genie informatique Universite de Sherbrooke  */

#include "facture.h"

Facture::Facture(){
	description = "";
	date = "";
	plats.deleteAll();
	ouverte = true;
	paid = false;
	soustotal = 0;
	tps = 0;
	tvq = 0;
	total = 0;
}
void Facture::init(){
	cout << "Quel est la description?" << endl;
	cin >> description;
	cout << "Quel est la date?" << endl;
	cin >> date;
	plats.deleteAll();
	ouverte = true;
	paid = false;
	soustotal = 0;
	tps = 0;
	tvq = 0;
	total = 0;
}
void Facture::miseAJourPrix(){
	soustotal = 0;
	for(int i=0; i<plats.getSize(); i++)
		soustotal += (plats.get(i)->value.get_prix() * (double)(plats.get(i)->value.get_quantite()));
	tps = 0.05 * soustotal;
	tvq = 0.09975 * soustotal;
	total = 1.14975 * soustotal;
}
void Facture::ajouterPlat(int code, string description, double prix, int quantite){
	
	PlatChoisi plat(code, description, prix, quantite);
	plats.ajouter(plat);
	miseAJourPrix();
}
void Facture::afficher(){
	
	cout << "Facture ----------------------------------------------------" << endl
		<< date << endl
		<< description << endl;

	for(int i=0; i<plats.getSize(); i++){
	
		plats.get(i)->value.afficher();
	
	}
	cout << "sous-total " << soustotal << endl
		<< "tps " << tps << endl
		<< "tvq " << tvq << endl
		<< "-------" << endl
		<< "total " << total << endl;

	if(paid)
		cout << "Paiement recu " << endl;
}
void Facture::modifier(){

}
void Facture::fermer(){
	ouverte = false;
}
void Facture::reouvrir(){
	ouverte = true;
}
void Facture::pay(){
	paid = true;
}

//-------------------------------------------------------------------------
//-------------------------------------------------------------------------
