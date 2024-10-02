#include "Media.h"
#include <iostream>
#include <string>

using namespace std;

Media::Media() {
    titre = "";
    createur = "";
    annee = 0;
    prix = 0;
    genre = "";
}

string Media::getTitre() const {
    return titre;
}

string Media::getCreateur() const {
    return createur;
}

int Media::getAnnee() const {
    return annee;
}

int Media::getPrix() const {
    return prix;
}

string Media::getGenre() const {
    return genre;
}

