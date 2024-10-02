#include <iostream>
#include <string>
#include "Mediatheque.h"

using namespace std;

int main() {
    // Données de test
    Livre l1;
    l1.setLivre("Les Miserables", "Victor Hugo", 1862, 1225, "Livre soupi");
    Livre l2;
    l2.setLivre("Le Petit Prince", "Antoine de Saint-Exupery", 1943, 93, "Livre cool");

    // Bibliothèque
    Mediatheque bibliotheque;
    bibliotheque.ajouterLivre(l1);
    bibliotheque.ajouterLivre(l2);

    int choix;
    do {
        cout << "Que voulez-vous faire ?" << endl;
        cout << "1. Afficher l'ensemble des livres de la bibliotheque" << endl;
        cout << "2. Ajouter un livre à la bibliotheque" << endl;
        cout << "3. Supprimer un livre de la bibliotheque" << endl;
        cout << "4. Rechercher un livre par son titre" << endl;
        cout << "5. Quitter" << endl;
        cin >> choix;

        if (choix == 1) {
            bibliotheque.afficherLivres();
        } else if (choix == 2) {
            string nvTitre, nvNom;
            int nvA, nvNb;
            cout << "Entrez le titre du livre : ";
            cin >> nvTitre;
            cout << "Entrez le nom de l'auteur : ";
            cin >> nvNom;
            cout << "Entrez l'annee de publication : ";
            cin >> nvA;
            cout << "Entrez le nombre de pages : ";
            cin >> nvNb;
            Livre nvLivre;
            nvLivre.setLivre(nvTitre, nvNom, nvA, nvNb);
            bibliotheque.ajouterLivre(nvLivre);
        } else if (choix == 3) {
            string titre;
            cout << "Entrez le titre du livre à supprimer : ";
            cin >> titre;
            bibliotheque.supprimerLivre(titre);
        } else if (choix == 4) {
            string titre;
            cout << "Entrez le titre du livre à rechercher : ";
            cin >> titre;
            bibliotheque.rechercherLivre(titre);
        } else if (choix == 5) {
            cout << "Au revoir !" << endl;
        } else {
            cout << "Choix invalide" << endl;
        }
    } while (choix != 5);

    return 0;
}