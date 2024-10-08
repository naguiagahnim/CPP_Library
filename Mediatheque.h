#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include "Media.h"
#include <vector>
#include <string>

class Mediatheque {
private:
    std::vector<Media*> medias;

public:
    Mediatheque();
    ~Mediatheque();
    void ajouterMedia(Media* media);
    void supprimerMedia(const std::string& titre);
    void afficherMedias() const;
    void rechercherMedia(const std::string& titre) const;
};

#endif // MEDIATHEQUE_H