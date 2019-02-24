/*
* Titre : Client.h - Travail Pratique #3
* Date : 11  Février 2019
* Auteur : Fatou S.Mounzeo
*/

#include "ClientRegulier.h"

//Constructeur

ClientRegulier::ClientRegulier(string nom, string prenom, int tailleGroupe, int nbPoints) : Client(nom, prenom, tailleGroupe), nbPoints_(nbPoints) {
	statut_ = Fidele;
}

ClientRegulier::ClientRegulier() : Client(), nbPoints_(0) {
	statut_ = Fidele;
}

//Getter
	
int ClientRegulier::getNbPoints() {
	return nbPoints_;
}

//Autre methode

void ClientRegulier::augmenterNbPoints(int bonus) {
	nbPoints_ += bonus;
}

ostream & operator<<(ostream & os, const ClientRegulier& client) {
	os << "\t" << client.nom_ << client.prenom_ << "statut: Fidele. Possede : "<< client.nbPoints_<<endl;
	return os;
}