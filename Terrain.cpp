/**
 * @file Terrain.cpp
 * @brief Implémentation de la classe Terrain.
 */

#include "Terrain.hpp"

/**
 * @brief Constructeur par défaut de la classe Terrain.
 * Initialise la matrice et définit le nombre de guerriers tués à 0.
 */
Terrain::Terrain()
{
    nbMort = 0;
    for (int i = 0; i < TAILLE_T; i++)
    {
        for (int j = 0; j < TAILLE_T; j++)
        {
            matrice[i][j] = nullptr;
        }
    }
}

/**
 * @brief Affiche l'état actuel du Terrain, y compris la position des guerriers.
 */
void Terrain::AfficherTerrain()
{
    for (int i = 0; i < TAILLE_T; i++)
    {
        for (int j = 0; j < TAILLE_T; j++)
        {
            if (matrice[i][j] != nullptr)
            {
                matrice[i][j]->AfficherGuerrier();
            }
        }
        std::cout << std::endl;
    }
}
