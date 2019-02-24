/*
* Titre : PlatBio.cpp - Travail Pratique #3
* Date : 18 Janvier 2019
* Auteur : Allan BEDDOUK
*/
#include "PlatCustom.h"

//Constructeur
PlatCustom::PlatCustom(string nom, double prix, double cout, int nbIngredients) : Plat(nom, prix, cout), nbIngredients_(nbIngredients) {
	type_ = Custom;
	supplement_ = calculerSupplement();
}

//Getter
int PlatCustom ::getNbIngredients () const {
	return nbIngredients_;
}

double PlatCustom::getSupplement() const {
	return supplement_;
}

//Setter 
void PlatCustom::setNbIngredients(int nbIngredients) {
	nbIngredients_ = nbIngredients;
}


//Methode de calcul poour les supplements
double PlatCustom::calculerSupplement()const {
	return nbIngredients_ * FRAIS_CUSTOMISATION;
}

//Methode affichage

ostream& operator<<(ostream& os, const PlatCustom& plat) {
	os << plat.nom_ << " - " << plat.prix_ << " $ (" << plat.cout_ << "$ pour le restaurant)" << endl;
	os << "\t" << "contients" << plat.getNbIngredients() << "elements modifies pour un supplement total de : " << plat.getSupplement() << "$" << endl;
	return os;
}