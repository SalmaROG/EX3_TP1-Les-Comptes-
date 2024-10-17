#pragma once
#include "Proprietaire.h"
#include<string>
using namespace std;
class Compte
{
private:
	int idCompte;
	Proprietaire* proprietaire;
	double solde;
public:
	//les constructeurs
	Compte(int id, Proprietaire* pr, double sd);
	Compte(const Compte& c);

	//Destructeur
	~Compte();

	// Les fonctionnalités 
	void depot(double montant);
	void retrait(double montant);
	void transfertVers(Compte& autreCompte, double montant);
	void consulterSolde() const;
};
