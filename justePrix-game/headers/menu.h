//
// Created by David Mosquera on 2024-02-01.
//

#ifndef UNTITLED_MENU_H
#define UNTITLED_MENU_H

// definition de la classe menu
enum class ChoixMenu {
    JOUER = 'a',
    AFFICHER_SCORES = 'b',
    QUITTER = 'q',
    INCORRECT
};

ChoixMenu demanderChoixMenu();
void afficherMenu();

#endif //UNTITLED_MENU_H
