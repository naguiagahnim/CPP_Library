#include <iostream>
#include <string>
#include "Mediatheque.h"
#include "Livre.h"
#include "Vinyle.h"
#include "BluRay.h"
#include "CD.h"
#include "DVD.h"

using namespace std;

int main() {
    // Create the media library
    Mediatheque mediatheque;

    // Add test data
    Livre* l1 = new Livre();
    l1->setLivre("Les Misérables", "Victor Hugo", 1862, 1225, "Roman");
    Vinyle* v1 = new Vinyle();
    v1->setVinyle("Thriller", "Michael Jackson", 1982, 20, "Pop", 42, 33, 9, "Epic Records");
    BluRay* b1 = new BluRay();
    b1->setBluRay("Inception", "Christopher Nolan", 2010, 148, "Science Fiction", 2);
    CD* c1 = new CD();
    c1->setCd("The Dark Side of the Moon", "Pink Floyd", 1973, 43, 43, "Rock", 9, "Harvest Records");
    DVD* d1 = new DVD();
    d1->setDVD("The Matrix", "The Wachowskis", 1999, 20, 60, "Science Fiction");

    mediatheque.ajouterMedia(l1);
    mediatheque.ajouterMedia(v1);
    mediatheque.ajouterMedia(b1);
    mediatheque.ajouterMedia(c1);
    mediatheque.ajouterMedia(d1);

    int choix;
    do {
        cout << "Que voulez-vous faire ?" << endl;
        cout << "1. Afficher l'ensemble des medias de la mediatheque" << endl;
        cout << "2. Ajouter un media a la mediatheque" << endl;
        cout << "3. Supprimer un media de la mediatheque" << endl;
        cout << "4. Rechercher un media par son titre" << endl;
        cout << "5. Quitter" << endl;
        cin >> choix;

        if (choix == 1) {
            mediatheque.afficherMedias();
        } else if (choix == 2) {
            // Add media logic (you can extend this to handle different media types)
            string type, titre, auteur, genre, label, resolution, audioFormat;
            int annee, duree, nbPages, nbPistes, vitesse, prix;
            bool interactivite;
            cout << "Entrez le type de media (Livre, Vinyle, BluRay, CD, DVD) : ";
            cin >> type;
            cout << "Entrez le titre : ";
            cin >> titre;
            cout << "Entrez l'auteur : ";
            cin >> auteur;
            cout << "Entrez l'annee : ";
            cin >> annee;
            cout << "Entrez le genre : ";
            cin >> genre;

            if (type == "Livre") {
                cout << "Entrez le nombre de pages : ";
                cin >> nbPages;
                Livre* livre = new Livre();
                livre->setLivre(titre, auteur, annee, nbPages, genre);
                mediatheque.ajouterMedia(livre);
            } else if (type == "Vinyle") {
                cout << "Entrez la duree : ";
                cin >> duree;
                cout << "Entrez la vitesse : ";
                cin >> vitesse;
                cout << "Entrez le nombre de pistes : ";
                cin >> nbPistes;
                cout << "Entrez le label : ";
                cin >> label;
                cout << "Entrez le prix : ";
                cin >> prix;
                Vinyle* vinyle = new Vinyle();
                vinyle->setVinyle(titre, auteur, annee, prix, genre, duree, vitesse, nbPistes, label);
                mediatheque.ajouterMedia(vinyle);
            } else if (type == "BluRay") {
                cout << "Entrez la duree : ";
                cin >> duree;
                cout << "Entrez le prix : ";
                cin >> prix;
                BluRay* bluray = new BluRay();
                bluray->setBluRay(titre, auteur, annee, prix, genre, duree);
                mediatheque.ajouterMedia(bluray);
            } else if (type == "CD") {
                cout << "Entrez la duree : ";
                cin >> duree;
                cout << "Entrez le nombre de pistes : ";
                cin >> nbPistes;
                cout << "Entrez le label : ";
                cin >> label;
                cout << "Entrez le prix : ";
                cin >> prix;
                CD* cd = new CD();
                cd->setCd(titre, auteur, annee, prix, duree, genre, nbPistes, label);
                mediatheque.ajouterMedia(cd);
            } else if (type == "DVD") {
                cout << "Entrez la duree : ";
                cin >> duree;
                cin >> interactivite;
                DVD* dvd = new DVD();
                dvd->setDVD(titre, auteur, annee, prix, duree, genre);
                mediatheque.ajouterMedia(dvd);
            } else {
                cout << "Type de media invalide" << endl;
            }
        } else if (choix == 3) {
            string titre;
            cout << "Entrez le titre du media à supprimer : ";
            cin >> titre;
            mediatheque.supprimerMedia(titre);
        } else if (choix == 4) {
            string titre;
            cout << "Entrez le titre du media à rechercher : ";
            cin >> titre;
            mediatheque.rechercherMedia(titre);
        } else if (choix == 5) {
            cout << "Au revoir !" << endl;
        } else {
            cout << "Choix invalide" << endl;
        }
    } while (choix != 5);

    return 0;
}