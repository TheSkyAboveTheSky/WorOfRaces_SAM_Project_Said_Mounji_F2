/**
 * @file Terrain.hpp
 * @brief Déclaration de la classe Terrain.
 */

#ifndef TERRAIN_HPP
#define TERRAIN_HPP

#include "Guerrier.hpp"

/**
 * @brief Constante définissant la taille de la matrice du Terrain.
 */
const int TAILLE_T = 6;

/**
 * @class Terrain
 * @brief Représente la classe Terrain, contenant une matrice d'objets Guerrier.
 */
class Terrain {
public:
    /**
     * @brief Nombre de guerriers tués sur le terrain.
     */
    int nbMort;

    /**
     * @brief Tableau 2D représentant le terrain avec des objets Guerrier.
     */
    Guerrier* matrice[TAILLE_T][TAILLE_T];

    /**
     * @brief Constructeur par défaut de la classe Terrain.
     * Initialise la matrice et définit le nombre de guerriers tués à 0.
     */
    Terrain();

    /**
     * @brief Affiche l'état actuel du Terrain, y compris la position des guerriers.
     */
    void AfficherTerrain();
};

#endif // TERRAIN_HPP
