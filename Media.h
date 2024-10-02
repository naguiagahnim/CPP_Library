#ifndef MEDIA_H
#define MEDIA_H
#include <string>
using namespace std;


//Classe Media
//Attributs : titre, createur, annee
//Méthodes : Constructeur, getTitre, getCreateur, getAnnee
class Media {
protected:
    string titre;
    string createur;
    int annee;
    int prix;
    string genre;
public:
    Media();
    string getTitre() const;
    string getCreateur() const;
    int getAnnee() const;
    int getPrix() const;
    string getGenre() const;
};



#endif //MEDIA_H
