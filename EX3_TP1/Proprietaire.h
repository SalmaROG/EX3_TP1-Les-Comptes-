#pragma once
#include <string>
using namespace std;

class Proprietaire
{
private:
    int id;
    string nom;
    string adresse;
    string numTele;

public:
    //Constructeur avec parametres
    Proprietaire(int id, string nom, string ads, string tel);

    //Destructeur
    ~Proprietaire();

    //Afficher les informations
    void Afficher_Proprietaire() const;

};
