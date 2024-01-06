/**
 * @file Elfe.cpp
 * @brief Implémentation de la classe Elfe.
 */

#include "Elfe.hpp"

// Définir l'identifiant de type pour la classe Elfe
const int Elfe::type = 1;

/**
 * @brief Constructeur par défaut de la classe Elfe.
 * Initialise les attributs tels que les points de vie, la force, la précision, la vitesse et l'intelligence.
 */
Elfe::Elfe()
{
    this->hp = 100;
    this->force = 20;
    this->precision = 0.4;
    this->vitesse = 70;
    this->intelligence = 100;
}

/**
 * @brief Affiche des informations sur le guerrier Elfe.
 */
void Elfe::AfficherGuerrier()
{
    std::cout << "Elfe :" << std::endl;
    Guerrier::AfficherGuerrier();
}

/**
 * @brief Obtient l'identifiant de type pour la classe Elfe.
 * @return L'identifiant de type.
 */
int Elfe::getType()
{
    return type;
}

/**
 * @brief Restaure les attributs de l'Elfe à leurs valeurs par défaut.
 */
void Elfe::restituer()
{
    precision = 0.3;
    vitesse = 60;
}

/**
 * @brief Déplace l'Elfe vers une nouvelle position en fonction de décalages aléatoires.
 * @param position La position actuelle de l'Elfe.
 * @return La nouvelle position après le déplacement.
 */
pair Elfe::bouger(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + 3 * x, position.second + 3 * y);

    return nv_position;
}

/**
 * @brief Détermine une nouvelle position pour une attaque en fonction de décalages aléatoires.
 * @param position La position actuelle de l'Elfe.
 * @return La nouvelle position pour une attaque.
 */
pair Elfe::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}

/**
 * @brief Destructeur pour la classe Elfe.
 */
Elfe::~Elfe() {}
