/*
* Titre : ClientPrestige.h - Travail Pratique #3
* Date : 11  Février 2019
* Auteur : Fatou S. Mounzeo
*/

#include "ClientPrestige.h"

//Constructeur

ClientPrestige::ClientPrestige(string nom, string prenom, int tailleGroupe, int nbPoints, AddressCode addresse) : ClientRegulier(nom, prenom, tailleGroupe, nbPoints) {
	addresse_ = addresse;
}

ClientPrestige::ClientPrestige() : ClientRegulier() {
	addresse_ = Zone3;
}

//Getter 

AddressCode ClientPrestige::getAddresseCode() {
	return addresse_;
}

string ClientPrestige::getAddressCodeString() {
	switch (addresse_) {
		case Zone1:
			return "Zone1";
			break;
		case Zone2:
			return "Zone2";
			break;
		case Zone3:
			return "Zone3";
			break;
	}
}

ostream & operator<<(ostream & os, ClientPrestige client) {
	os << "\t" << client.nom_ << client.prenom_ << "statut: Prestige. Possede : " << client.nbPoints_ << endl;
	os << "\t" << " habite dans la " << client.getAddressCodeString() << endl;
	return os;
}
