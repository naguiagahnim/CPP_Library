#include <iostream>
#include <string>
#include "BluRay.h"

using namespace std;

BluRay::BluRay() {
    duree = 0;
}

void BluRay::setBluRay(string t, string c, int a, int p, string g, int d) {
    titre = t;
    createur = c;
    annee = a;
    prix = p;
    genre = g;
    duree = d;
}


int BluRay::getDuree() const {
    return duree;
}

void BluRay::afficher() const {
    cout << "Titre : " << titre << endl;
    cout << "Createur : " << createur << endl;
    cout << "Annee : " << annee << endl;
    cout << "Prix : " << prix << endl;
    cout << "Genre : " << genre << endl;
    cout << "Duree : " << duree << " minutes" << endl;
}