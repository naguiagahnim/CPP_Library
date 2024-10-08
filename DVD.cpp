#include <iostream>
#include <string>
#include "DVD.h"

using namespace std;

DVD::DVD() {
    duree = 0;
}

int DVD::getDuree() {
    return duree;
}

void DVD::setDVD(string t, string c, int a, int p, int d, string g) {
    titre = t;
    createur = c;
    annee = a;
    prix = p;
    duree = d;
    genre = g;
}

void DVD::afficher() const{
    cout << "Titre : " << titre << endl;
    cout << "Createur : " << createur << endl;
    cout << "Annee : " << annee << endl;
    cout << "Prix : " << prix << endl;
    cout << "Duree : " << duree << endl;
    cout << "Genre : " << genre << endl;
}