/**
 * @file Titan.cpp
 * @brief Implémentation de la classe Titan.
 */

#include "Titan.hpp"

// Définition de l'identifiant de type pour la classe Titan
const int Titan::type = 3;

/**
 * @brief Constructeur par défaut de la classe Titan.
 * Initialise les attributs tels que les points de vie, la force, la précision, la vitesse et l'intelligence.
 */
Titan::Titan()
{
    this->hp = 100;
    this->force = 80;
    this->precision = 0.2;
    this->vitesse = 10;
    this->intelligence = 50;
}

/**
 * @brief Affiche des informations sur le guerrier Titan.
 */
void Titan::AfficherGuerrier()
{
    std::cout << "Titan :" << std::endl;
    Guerrier::AfficherGuerrier();
}

/**
 * @brief Obtient l'identifiant de type pour la classe Titan.
 * @return L'identifiant de type.
 */
int Titan::getType()
{
    return type;
}

/**
 * @brief Restaure les attributs du Titan à leurs valeurs par défaut.
 */
void Titan::restituer()
{
    precision = 0.3;
    vitesse = 10;
}

/**
 * @brief Déplace le Titan vers une nouvelle position en fonction de décalages aléatoires.
 * @param position La position actuelle du Titan.
 * @return La nouvelle position après le déplacement.
 */
pair Titan::bouger(pair position)
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
 * @param position La position actuelle du Titan.
 * @return La nouvelle position pour une attaque.
 */
pair Titan::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}

/**
 * @brief Destructeur de la classe Titan.
 */
Titan::~Titan() {}
