
#include "Compte.h"
#include <iostream>
using namespace std;

Compte::Compte(int id, Proprietaire* pr, double sd) :idCompte(id), proprietaire(pr), solde(sd)
{
    cout << "Constructeur Compte." << endl;
}

Compte::Compte(const Compte& c) :idCompte(c.idCompte), proprietaire(c.proprietaire), solde(c.solde)
{
}

Compte::~Compte()
{
    cout << "Destructeur Compte." << endl;
}

void Compte::depot(double montant)
{
    if (montant > 0)
    {
        this->solde += montant;
        cout << "D�p�t de " << montant << " effectu�. Nouveau solde: " << this->solde << endl;
    }
    else {
        cout << "Le montant du d�p�t doit �tre positif." << endl;
    }

}

void Compte::retrait(double montant)
{
    if (montant > 0 && montant <= this->solde)
    {
        this->solde -= montant;
        cout << "Retrait de " << montant << " effectu�. Nouveau solde: " << this->solde << endl;
    }
    else if (montant > this->solde)
    {
        cout << "Solde insuffisant pour ce retrait." << endl;
    }
    else
    {
        cout << "Le montant du retrait doit �tre positif." << endl;
    }
}

void Compte::transfertVers(Compte& autreCompte, double montant)
{
    if (montant > 0 && montant <=this->solde)
    {
        this->solde -= montant;
        autreCompte.solde += montant;
        cout << "Transfert de " << montant  << " effectu�." << endl;
        cout << "Nouveau solde de votre compte: " <<this->solde << endl;
    }
    else if (montant > this->solde)
    {
        cout << "Solde insuffisant pour effectuer le transfert." << endl;
    }
    else
    {
        cout << "Le montant du transfert doit �tre positif." << endl;
    }
}

void Compte::consulterSolde() const
{
    cout << "Le solde du compte de est: " << this->solde << endl;
}

