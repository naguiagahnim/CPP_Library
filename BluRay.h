#ifndef BLURAY_H
#define BLURAY_H
#include <string>
#include "Media.h"



class BluRay : public Media{
private:
    string genre;
    int duree;
public:
    BluRay();
    void setBluRay(string, string, int, int, string, int);
    int getDuree() const;
    void afficherBluRay() const;
};



#endif //BLURAY_H
