#include "Mediatheque.h"
#include <iostream>

Mediatheque::Mediatheque() {}

Mediatheque::~Mediatheque() {
    for (Media* media : medias) {
        delete media;
    }
}

void Mediatheque::ajouterMedia(Media* media) {
    medias.push_back(media);
}

void Mediatheque::supprimerMedia(const std::string& titre) {
    for (auto it = medias.begin(); it != medias.end(); ++it) {
        if ((*it)->getTitre() == titre) {
            delete *it;
            medias.erase(it);
            break;
        }
    }
}

void Mediatheque::afficherMedias() const {
    for (const Media* media : medias) {
        std::cout << "------------------------------------------------------" << std::endl;
        media->afficher();
    }
}

void Mediatheque::rechercherMedia(const std::string& titre) const {
    for (const Media* media : medias) {
        if (media->getTitre() == titre) {
            media->afficher();
            return;
        }
    }
    std::cout << "Media non trouvé" << std::endl;
}