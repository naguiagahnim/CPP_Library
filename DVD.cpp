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

void DVD::setDVD(string t, string c, int a, int p, string g) {
    titre = t;
    createur = c;
    annee = a;
    prix = p;
    genre = g;
}

void DVD::afficherDVD() {
    cout << "Titre : " << titre << endl;
    cout << "Createur : " << createur << endl;
    cout << "Annee : " << annee << endl;
    cout << "Prix : " << prix << endl;
    cout << "Duree : " << duree << endl;
    cout << "Genre : " << genre << endl;
}