#ifndef LIVRE_H
#define LIVRE_H
#include <string>
using namespace std;

//Classe livre
//Attributs : titre, auteur, annee, nb_pages
//Méthodes : Constructeur, Affiche, getTitre
class Livre{
private:
    string titre;
    string auteur;
    int annee;
    int nb_pages;

public:
    Livre();
    void setLivre(string,string, int, int);
    void Affiche() const;
    string getTitre() const;

};

#endif //LIVRE_H
