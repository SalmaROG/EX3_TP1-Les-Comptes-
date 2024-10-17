#include "Proprietaire.h"
#include <iostream>
using namespace std;

Proprietaire::Proprietaire(int id, string nom, string ads, string tel) :id(id), nom(nom), adresse(ads), numTele(tel)
{
	cout << "Constructeur Proprietaire." << endl;
}

Proprietaire::~Proprietaire()
{
	cout << "Destructeur Proprietaire." << endl;
}

void Proprietaire::Afficher_Proprietaire() const
{
	cout << "Nom: " << this->nom << endl;
	cout << "Adress: " << this->adresse << endl;
	cout << "Tele: " << this->numTele << endl;
}