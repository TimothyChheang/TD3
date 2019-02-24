/*
* Titre : Client.cpp - Travail Pratique #3
* Date : 11  Février 2019
* Auteur : Fatou S. Mounzeo
*/

#include"Client.h"

//Constructeur
Client::Client(string nom, string prenom, int tailleGroupe) : nom_(nom), prenom_(prenom), tailleGroupe_(tailleGroupe) {}

Client::Client() {
	nom_ = "inconnu";
	prenom_ = "inconnu";
	statut_ = Occasionnel;
	tailleGroupe_ = 0;
}

//Getter

StatutClient Client::getStatut() {
	return statut_;
}

int Client::getTailleGroupe() {
	return tailleGroupe_;
}

string Client::getNom() {
	return nom_;
}

string Client::getPrenom() {
	return prenom_;
}

// Autre methode

string Client::convertirStatutString() const {
	switch (statut_) {
		case Occasionnel:
			return "Occasionnel";
			break;
		case Fidele:
			return "Fidele";
			break;
		case Prestige:
			return"Prestige";
			break;
	}
}

ostream& operator<<(ostream & os, const Client& client) {
	os << "\t" << client.nom_ << client.prenom_ << "statut: " << client.convertirStatutString() << endl;
	return os;
}
