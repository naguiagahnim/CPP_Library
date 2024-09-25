#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include "livre.h"

class Bibliotheque {
private:
    Livre livres[100];
    int nbLivres;

public:
    Bibliotheque();
    void ajouterLivre(const Livre&);
    void supprimerLivre(const string&);
    void afficherLivres() const;
    void rechercherLivre(const string&) const;
};

#endif // BIBLIOTHEQUE_H