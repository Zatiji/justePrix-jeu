//
// Created by David Mosquera on 2024-02-01.
//

#include <iostream>
#include "../headers/menu.h"

using namespace std;

// fonction pour entrer le choix du joueur
ChoixMenu demanderChoixMenu() {
    char saisieChoix;
    cin >> saisieChoix;
    if(saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::AFFICHER_SCORES)
       || saisieChoix == static_cast<char>(ChoixMenu::QUITTER)){
        return static_cast<ChoixMenu>(saisieChoix);
    } else {
        return ChoixMenu::INCORRECT;
    }
}

// affichage de menu
void afficherMenu() {
    //phrase de bienvenue
    cout << "Bienvenue au Juste Prix" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER) << " : Jouer" << endl;
    cout << static_cast<char>(ChoixMenu::AFFICHER_SCORES) << " : afficher les scores" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << " : Quitter" << endl;

}
