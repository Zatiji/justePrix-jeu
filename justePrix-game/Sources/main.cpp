#include <iostream>
#include <array>
#include <random>

//fichier externes
#include "../Sources/menu.cpp"
#include "../Sources/jeu.cpp"

using namespace std;

int main() {
    bool continuer = true;

    array<int, NOMBRE_SCORE> scores{0, 0, 0};
    int indiceCourant = 0;

    // génération aléatoire de la réponse
    auto generateurAleatoire = std::random_device{};
    auto generateur = mt19937{generateurAleatoire()};
    auto distribution = uniform_int_distribution{BORNE_MIN, BORNE_MAX};

    while(continuer){
        //affichage du menu
        afficherMenu();
        auto choix = demanderChoixMenu();

        // traitement de la réponse du joueur au menu
        switch(choix){
            case ChoixMenu::JOUER:
                scores[indiceCourant] = jouerPartie(distribution(generateur));
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
