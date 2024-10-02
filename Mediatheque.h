#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include "Livre.h"

class Mediatheque {
private:
    Livre livres[100];
    int nbLivres;

public:
    Mediatheque();
    void ajouterLivre(const Livre&);
    void supprimerLivre(const string&);
    void afficherLivres() const;
    void rechercherLivre(const string&) const;
};

#endif // MEDIATHEQUE_H