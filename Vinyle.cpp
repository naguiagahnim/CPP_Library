#include <iostream>
#include <string>
#include "Vinyle.h"

using namespace std;

Vinyle::Vinyle() {
    duree = 0;
    nbTours = 0;
    nbPistes = 0;
    maisonDisque = "";
}

void Vinyle::setVinyle(string t, string c, int a, int p, string g, int d, int nt, int np, string md) {
    titre = t;
    createur = c;
    annee = a;
    prix = p;
    genre = g;
    duree = d;
    nbTours = nt;
    nbPistes = np;
    maisonDisque = md;
}

int Vinyle::getDuree() const {
    return duree;
}

int Vinyle::getNbTours() const {
    return nbTours;
}

int Vinyle::getNbPistes() const {
    return nbPistes;
}

string Vinyle::getMaisonDisque() const {
    return maisonDisque;
}

void Vinyle::afficherVinyle() const {
    cout << "Titre : " << titre << endl;
    cout << "Createur : " << createur << endl;
    cout << "Annee : " << annee << endl;
    cout << "Prix : " << prix << endl;
    cout << "Genre : " << genre << endl;
    cout << "Duree : " << duree << " minutes" << endl;
    cout << "Nombre de tours : " << nbTours << endl;
    cout << "Nombre de pistes : " << nbPistes << endl;
    cout << "Maison de disque : " << maisonDisque << endl;
}
