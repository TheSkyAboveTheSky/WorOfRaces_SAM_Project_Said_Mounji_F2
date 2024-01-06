/**
 * @file Humain.cpp
 * @brief Implémentation de la classe Humain.
 */

#include "Humain.hpp"

// Définition de l'identifiant de type pour la classe Humain
const int Humain::type = 0;

/**
 * @brief Constructeur par défaut pour la classe Humain.
 * Initialise les attributs tels que les points de vie, la force, la précision, la vitesse et l'intelligence.
 */
Humain::Humain() {
    this->hp = 100;
    this->force = 10;
    this->precision = 0.5;
    this->vitesse = 60;
    this->intelligence = 60;
}

/**
 * @brief Affiche des informations sur le guerrier Humain.
 */
void Humain::AfficherGuerrier()
{
    std::cout << "Humain :" << std::endl;
    Guerrier::AfficherGuerrier();
}

/**
 * @brief Obtient l'identifiant de type pour la classe Humain.
 * @return L'identifiant de type.
 */
int Humain::getType()
{
    return type;
}

/**
 * @brief Restaure les attributs de l'Humain à leurs valeurs par défaut.
 */
void Humain::restituer()
{
    precision = 0.5;
    vitesse = 60;
}

/**
 * @brief Déplace l'Humain vers une nouvelle position en fonction de décalages aléatoires.
 * @param position La position actuelle de l'Humain.
 * @return La nouvelle position après le déplacement.
 */
pair Humain::bouger(pair position)
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
 * @param position La position actuelle de l'Humain.
 * @return La nouvelle position pour une attaque.
 */
pair Humain::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}

/**
 * @brief Destructeur pour la classe Humain.
 */
Humain::~Humain() {}
