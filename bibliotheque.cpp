#include "bibliotheque.h"
#include <iostream>

Bibliotheque::Bibliotheque() : nbLivres(0) {}

void Bibliotheque::ajouterLivre(const Livre& livre) {
    if (nbLivres < 100) {
        livres[nbLivres++] = livre;
    } else {
        std::cout << "La bibliothèque est pleine" << std::endl;
    }
}

void Bibliotheque::supprimerLivre(const std::string& titre) {
    for (int i = 0; i < nbLivres; ++i) {
        if (livres[i].getTitre() == titre) {
            for (int j = i; j < nbLivres - 1; ++j) {
                livres[j] = livres[j + 1];
            }
            --nbLivres;
            break;
        }
    }
}

void Bibliotheque::afficherLivres() const {
    for (int i = 0; i < nbLivres; ++i) {
        std::cout << "------------------------------------------------------" << std::endl;
        livres[i].Affiche();
    }
}

void Bibliotheque::rechercherLivre(const std::string& titre) const {
    for (int i = 0; i < nbLivres; ++i) {
        if (livres[i].getTitre() == titre) {
            livres[i].Affiche();
            return;
        }
    }
    std::cout << "Livre non trouvé" << std::endl;
}