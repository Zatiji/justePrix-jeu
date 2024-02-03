#include <iostream>
#include <array>

//fichier externes
#include "../Sources/menu.cpp"
#include "../Sources/jeu.cpp"

using namespace std;

int main() {
    bool continuer = true;

    array<int, NOMBRE_SCORE> scores{0, 0, 0};
    int indiceCourant = 0;

    while(continuer){
        //affichage du menu
        afficherMenu();
        auto choix = demanderChoixMenu();

        // traitement de la réponse du joueur au menu
        switch(choix){
            case ChoixMenu::JOUER:
                scores[indiceCourant] = jouerPartie(3000);
                indiceCourant = (indiceCourant + 1) % NOMBRE_SCORE;
                break;

            case ChoixMenu::AFFICHER_SCORES:
                afficherScore(scores);
                break;

            case ChoixMenu::QUITTER:
                cout << "Okay bye!" << endl << endl;
                continuer = false;
                break;

            case ChoixMenu::INCORRECT:
            default:
                return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
