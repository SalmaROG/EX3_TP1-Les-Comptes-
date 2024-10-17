#include <iostream>
#include "Compte.h"
#include "Proprietaire.h"

using namespace std;

int main() {
    // Création des propriétaires
    Proprietaire* proprietaire1 = new Proprietaire(1, "Salma", "123 Rue de Casa", "0623456789");
    Proprietaire* proprietaire2 = new Proprietaire(2, "Ahmed", "125 Rue de Casa", "0687654321");

    // Création des comptes bancaires avec les propriétaires
    Compte compte1(1001, proprietaire1, 5000.0);
    Compte compte2(1002, proprietaire2, 3000.0);

    // Affichage des informations des propriétaires
    cout << "Informations du proprietaire du compte1 : " << endl;
    proprietaire1->Afficher_Proprietaire();

    cout << "Informations du proprietaire du compte2 : " << endl;
    proprietaire2->Afficher_Proprietaire();

    // Affichage des soldes initiaux
    cout << "\nSolde initial de compte1 : ";
    compte1.consulterSolde();

    cout << "Solde initial de compte2 : ";
    compte2.consulterSolde();

    // Dépôt dans le compte1
    cout << "\nSalma dépose 1000 dans son compte." << endl;
    compte1.depot(1000.0);

    // Retrait dans le compte2
    cout << "\nAhmed retire 500 de son compte." << endl;
    compte2.retrait(500.0);

    // Transfert de compte1 à compte2
    cout << "\nSalma transfère 2000 à Ahmed." << endl;
    compte1.transfertVers(compte2, 2000.0);

    // Affichage des soldes après les transactions
    cout << "\nSolde après transactions:" << endl;
    cout << "Solde de compte1 : ";
    compte1.consulterSolde();

    cout << "Solde de compte2 : ";
    compte2.consulterSolde();

    // Libération de la mémoire des propriétaires
    delete proprietaire1;
    delete proprietaire2;

    return 0;
}
