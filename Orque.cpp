/**
 * @file Orque.cpp
 * @brief Implémentation de la classe Orque.
 */

#include "Orque.hpp"

// Définition de l'identifiant de type pour la classe Orque
const int Orque::type = 2;

/**
 * @brief Constructeur par défaut de la classe Orque.
 * Initialise les attributs tels que les points de vie, la force, la précision, la vitesse et l'intelligence.
 */
Orque::Orque()
{
    this->hp = 100;
    this->force = 30;
    this->precision = 0.2;
    this->vitesse = 30;
    this->intelligence = 20;
}

/**
 * @brief Affiche des informations sur le guerrier Orque.
 */
void Orque::AfficherGuerrier()
{
    std::cout << "Orque :" << std::endl;
    Guerrier::AfficherGuerrier();
}

/**
 * @brief Obtient l'identifiant de type pour la classe Orque.
 * @return L'identifiant de type.
 */
int Orque::getType()
{
    return type;
}

/**
 * @brief Restaure les attributs de l'Orque à leurs valeurs par défaut.
 */
void Orque::restituer()
{
    precision = 0.2;
    vitesse = 20;
}

/**
 * @brief Déplace l'Orque vers une nouvelle position en fonction de décalages aléatoires.
 * @param position La position actuelle de l'Orque.
 * @return La nouvelle position après le déplacement.
 */
pair Orque::bouger(pair position)
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
 * @param position La position actuelle de l'Orque.
 * @return La nouvelle position pour une attaque.
 */
pair Orque::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}

/**
 * @brief Destructeur de la classe Orque.
 */
Orque::~Orque() {}
