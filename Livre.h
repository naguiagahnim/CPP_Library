#ifndef LIVRE_H
#define LIVRE_H
#include <string>
#include "Media.h"
using namespace std;

//Classe livre
//Attributs : titre, auteur, annee, nb_pages
//Méthodes : Constructeur, Affiche, getTitre
class Livre : public Media {
private:
    int nb_pages;

public:
    Livre();
    void setLivre(string, string, int, int, string);
    void affiche() const;
    string getTitre() const;

};

#endif //LIVRE_H
