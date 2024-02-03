//
// Created by David Mosquera on 2024-02-01.
//

#ifndef UNTITLED_JEU_H
#include <array>
#include "../headers/constantes.h"
#define UNTITLED_JEU_H

using TableauDeScores = std::array<int, NOMBRE_SCORE>;

void demanderProposition(int& proposition);
int jouerPartie(int aDeviner, int BORNE_MIN, int BORNE_MAX);
void afficherScore(TableauDeScores &scores);

#endif //UNTITLED_JEU_H
