#include <iostream>
#include <string>
#include "Livre.h"

using namespace std;

Livre::Livre() {
    nb_pages = 0;
}

void Livre::setLivre(string t, string c, int a, int nbp, string g) {
    titre = t;
    createur = c;
    annee = a;
    nb_pages = nbp;
    genre = g;
}

void Livre::afficher() const{
    cout<<"Titre : "<<titre<<endl;
    cout<<"Auteur : "<<createur<<endl;
    cout<<"Annee : "<<annee<<endl;
    cout<<"Nombre de pages : "<<nb_pages<<endl;
}

string Livre::getTitre() const{
    return titre;
}

