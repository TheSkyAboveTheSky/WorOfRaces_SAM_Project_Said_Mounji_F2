/**
 * @file Terrain.hpp
 * @brief Declaration of The Terrain Class.
 *
 */
#ifndef TERRAIN__HPP
#define TERRAIN__HPP

#include "Guerrier.hpp"

const int TAILLE_T = 6;

class Terrain
{
public:

    int nbMort;
    Guerrier * matrice[TAILLE_T][TAILLE_T];
    Terrain();
    void AfficherTerrain();

};

#endif 