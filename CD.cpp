#include "CD.h"
#include <iostream>
#include <string>

using namespace std;

CD::CD() {
    duree = 0;
    nbTitre = 0;
    maisonDisque = "";
}

void CD::afficheCd(){
    cout<<"Titre : "<<titre<<endl;
    cout<<"Auteur : "<<createur<<endl;
    cout<<"Annee : "<<annee<<endl;
    cout<<"Duree : "<<duree<<endl;
    cout<<"Genre : "<<genre<<endl;
    cout<<"Nombre de titres : "<<nbTitre<<endl;
    cout<<"Maison de disque : "<<maisonDisque<<endl;
}

int CD::getDuree(){
    return duree;
}

string CD::getMaisonDisque(){
    return maisonDisque;
}

int CD::getnbTitre(){
    return nbTitre;
}

void CD::setCd(string t, string c, int a, int p, int d, string g, int nbT, string mD){
    titre = t;
    createur = c;
    annee = a;
    prix = p;
    duree = d;
    genre = g;
    nbTitre = nbT;
    maisonDisque = mD;
}