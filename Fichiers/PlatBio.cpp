/*
* Titre : PlatBio.cpp - Travail Pratique #3
* Date : 18 Janvier 2019
* Auteur : Allan BEDDOUK
*/

#include "PlatBio.h"

// Constructeur 

PlatBio::PlatBio(string nom , double prix, double cout, double ecotaxe): Plat(nom, prix, cout), ecoTaxe_(ecotaxe) {
	type_ = Bio;
}

// Setter

void PlatBio :: setEcoTaxe (double ecoTaxe) {
	ecoTaxe_ = ecoTaxe;
}


//Getter 

double PlatBio::getEcoTaxe() const {
	return ecoTaxe_;
}

// Affichage 

ostream& operator <<(ostream& os, const PlatBio & plat) {
	os << plat.nom_ << " - " << plat.prix_ << " $ (" << plat.cout_ << "$ pour le restaurant)" << endl;
	os << "\t" << "comprend une Taxe ecologique de : " << plat.ecoTaxe_ << "$";
	return os;
}
