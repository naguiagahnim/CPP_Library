#include <iostream>
#include <string>
#include "livre.h"


using namespace std;

int main() {
    //Données de test
    Livre l1;
    l1.setLivre("Les Miserables","Victor Hugo",1862,1225);
    Livre l2;
    l2.setLivre("Le Petit Prince","Antoine de Saint-Exupery",1943,93);

    //Bibliothèque
    Livre bibliotheque[100];
    bibliotheque[0] = l1;
    bibliotheque[1] = l2;
    int bibliotheque_len = 2;


    int choix;
    cout<<"Que voulez-vous faire ?"<<endl;
    cout<<"1. Afficher l'ensemble des livres de la bibliotheque"<<endl;
    cout<<"2.Ajouter un livre à la bibliotheque"<<endl;
    cout<<"3. Supprimer un livre de la bibliotheque"<<endl;
    cout<<"4.Rechercher un livre par son titre"<<endl;
    cout<<"5. Quitter"<<endl;
    cin>>choix;

    if(choix==1) {
        for(int i=0;i<sizeof(bibliotheque) / sizeof(bibliotheque[0]);i++) {
            cout<<"------------------------------------------------------"<<endl;
            bibliotheque[i].Affiche();
        }
    }
    else if(choix==2) {
        string nvTitre;
        string nvNom;
        int nvA;
        int nvNb;
        cout<<"Entrez le titre du livre : ";
        cin>>nvTitre;
        cout<<"Entrez le nom de l'auteur : ";
        cin>>nvNom;
        cout<<"Entrez l'annee de publication : ";
        cin>>nvA;
        cout<<"Entrez le nombre de pages : ";
        cin>>nvNb;
        Livre nvLivre;
        nvLivre.setLivre(nvTitre, nvNom, nvA, nvNb);
        if (bibliotheque_len < 100) {
            bibliotheque[bibliotheque_len++] = nvLivre;
            bibliotheque_len++;
        } else {
            cout<<"La bibliothèque est pleine"<<endl;
            return -1;
        }
    }
    else if(choix==3) {

    }
    else if(choix==4) {

    }
    else if(choix==5) {
        cout<<"Au revoir !"<<endl;
    }
    else {
        cout<<"Choix invalide"<<endl;
        return -1;
    }

    return 0;
}