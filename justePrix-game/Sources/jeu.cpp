//
// Created by David Mosquera on 2024-02-01.
//

#include "../headers/constantes.h"
#include "../headers/jeu.h"

#include <iostream>
#include <chrono>

using namespace std;
using Duree = std::chrono::duration<double>;

using TableauDeScores = std::array<int, NOMBRE_SCORE>;

//proposition est une référence, car sinon le code pense que proposition est ne nouvelle variable
void demanderProposition(int &proposition) {
    cin >> proposition;
}

// algorithme du jeu
int jouerPartie(int aDeviner, int valeurMin = BORNE_MIN, int valeurMax = BORNE_MAX) {

    //variable importante
    auto duree = Duree{3s};
    int nbTentative = 0;
    int proposition = 0;

    auto debutPartie = std::chrono::system_clock::now();

    //algorithme d'une partie
    do{
        cout << "Deviner Le prix: ";
        //l'utilisateur essaie de deviner le nombre
        demanderProposition(proposition);
        nbTentative++;

        //évaluation et output
        if(proposition >= valeurMin && proposition < valeurMax){
            if(proposition == aDeviner){
                cout << "Bravo!" << endl;
            } else if(proposition > aDeviner){
                cout << "Plus bas" << endl;
            } else {
                cout << "Plus haut" << endl;
            }
        }
    } while (proposition != aDeviner && proposition >= valeurMin);

    auto finPartie = std::chrono::system_clock::now();
    duree = std::chrono::duration_cast<Duree>(finPartie - debutPartie);

    //message de fin
    if(proposition == aDeviner){
        cout << "Partie Terminée! En " << nbTentative << " tentatives" << endl;
        cout << "durée de la partie: " << duree.count() << endl;
        if (duree <= 30s) {
            cout << "vous avez gagné!!" << endl;
        }
    } else {
        cout << "Partie abandonnée...";
    }
    cout << endl;
    return nbTentative;
}

void afficherScore(TableauDeScores &scores) {
    cout << "Dernières partie :" << endl;
    for (int score: scores) {
        if (score == 0) {
            cout << '-' << endl;
        } else {
            cout << score << " tentatives" << endl;
        }
    }
}
