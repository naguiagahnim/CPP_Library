#include <iostream>
#include <string>
#include "livre.h"


using namespace std;

int main() {
    //Données de test
    Livre l1("Les Misérables", "Victor Hugo", 1862, 1234);
    Livre l2("Le Petit Prince", "Antoine de Saint-Exupéry", 1943, 100);

    int choix;
    cout<<"Que voulez-vous faire ?"<<endl;
    cout<<"1. Afficher l'ensemble des livres de la bibliothèque"<<endl;
    cout<<"2.Ajouter un livre à la bibliothèque"<<endl;
    cout<<"3. Supprimer un livre de la bibliothèque"<<endl;
    cout<<"4.Rechercher un livre par son titre"<<endl;
    cout<<"5. Quitter"<<endl;
    cin>>choix;

    if(choix==1) {

    }
    else if(choix==2) {

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