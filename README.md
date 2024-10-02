# Mediatheque Project

## Overview
This project is a simple media library management system implemented in C++. It allows users to manage a collection of various media types such as books, vinyl records, Blu-rays, CDs, and DVDs.

## Features
- Add, remove, display, and search for media items.
- Supports multiple media types:
    - Books
    - Vinyl Records
    - Blu-rays
    - CDs
    - DVDs

## Classes
### `Media`
Base class for all media types.

### `Livre`
Represents a book with attributes like title, author, year of publication, number of pages, and genre.

### `Vinyle`
Represents a vinyl record with attributes like title, artist, year of release, genre, duration, speed, number of tracks, and label.

### `BluRay`
Represents a Blu-ray with attributes like title, director, year of release, genre, duration, resolution, audio format, interactivity, and copy protection.

### `CD`
Represents a CD with attributes like title, artist, year of release, genre, duration, number of tracks, and label.

### `DVD`
Represents a DVD with attributes like title, director, year of release, genre, duration, resolution, audio format, interactivity, and copy protection.

### `Mediatheque`
Manages a collection of media items. Provides methods to add, remove, display, and search for media items.

## Usage
### Adding Media
To add a media item, select the type of media and enter the required details.

### Removing Media
To remove a media item, enter the title of the media item to be removed.

### Displaying Media
To display all media items, select the option to display the media library.

### Searching Media
To search for a media item, enter the title of the media item to be searched.

## Example
```cpp
#include <iostream>
#include <string>
#include "Mediatheque.h"

using namespace std;

int main() {
    // Create the media library
    Mediatheque mediatheque;

    // Add media items
    Livre* l1 = new Livre("Les Misérables", "Victor Hugo", 1862, "Roman");
    Vinyle* v1 = new Vinyle("Thriller", "Michael Jackson", 1982, "Pop", 42, 33, 9, "Epic Records");
    BluRay* b1 = new BluRay("Inception", "Christopher Nolan", 2010, "Science Fiction", 148, "1080p", "Dolby TrueHD", true, "AACS");
    CD* c1 = new CD("Back in Black", "AC/DC", 1980, "Rock", 42, 10, "Atlantic Records");
    DVD* d1 = new DVD("The Matrix", "The Wachowskis", 1999, "Science Fiction", 136, "480p", "Dolby Digital", false, "CSS");

    mediatheque.ajouterMedia(l1);
    mediatheque.ajouterMedia(v1);
    mediatheque.ajouterMedia(b1);
    mediatheque.ajouterMedia(c1);
    mediatheque.ajouterMedia(d1);

    // Display all media items
    mediatheque.afficherMedias();

    return 0;
}
```
## Compilation
To compile the project, use the following command:
```sh
g++ -o mediatheque main.cpp Mediatheque.cpp Livre.cpp Vinyle.cpp BluRay.cpp CD.cpp DVD.cpp
```

## Running
To run the compiled program, use the following command:
```sh
./mediatheque
```