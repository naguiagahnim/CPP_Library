#ifndef VINYLE_H
#define VINYLE_H
#include "Media.h"
#include <string>


class Vinyle : public Media{
private:
    int duree;
    int nbTours;
    int nbPistes;
    string maisonDisque;
public:
    Vinyle();
    int getDuree() const;
    int getNbTours() const;
    int getNbPistes() const;
    void setVinyle(string, string, int, int, string, int, int, int, string);
    void afficher() const override;
    string getMaisonDisque() const;
};



#endif //VINYLE_H
