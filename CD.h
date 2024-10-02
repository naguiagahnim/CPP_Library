#ifndef CD_H
#define CD_H
#include <string>

#include "Media.h"

using namespace std;

class CD : public Media{
private:
    int duree;
    int nbTitre;
    string maisonDisque;

public:
    CD();
    void afficheCd();
    int getDuree();
    int getnbTitre();
    string getMaisonDisque();
    void setCd(string, string, int, int, int, string, int, string);
};

#endif //CD_H
