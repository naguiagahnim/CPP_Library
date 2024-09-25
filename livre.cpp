#include <iostream>
#include <string>
#include "livre.h"

using namespace std;

Livre::Livre(string t, string a, int an, int nb) {
    titre = t;
    auteur = a;
    annee = an;
    nb_pages = nb;
}

void Livre::Affiche() {
    cout<<"Titre : "<<titre<<endl;";
    cout<<"Auteur : "<<auteur<<endl;
    cout<<"Annee : "<<annee<<endl;
    cout<<"Nombre de pages : "<<nb_pages<<endl;
}

string Livre::getTitre() {
    return titre;
}

