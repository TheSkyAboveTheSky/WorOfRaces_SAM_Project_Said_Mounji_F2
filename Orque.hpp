/**
 * @file Orque.hpp
 * @brief Déclaration de la classe Orque.
 */

#ifndef Orque_HPP
#define Orque_HPP

#include "Guerrier.hpp"

/**
 * @class Orque
 * @brief Représente la classe du guerrier Orque, dérivée de la classe de base Guerrier.
 */
class Orque : public Guerrier {
public:
    /**
     * @brief Identifiant de type constant statique pour la classe Orque.
     */
    static const int type;

    /**
     * @brief Constructeur par défaut de la classe Orque.
     * Initialise les attributs tels que les points de vie, la force, la précision, la vitesse et l'intelligence.
     */
    Orque();

    /**
     * @brief Restaure les attributs de l'Orque à leurs valeurs par défaut.
     */
    void restituer() override;

    /**
     * @brief Déplace l'Orque vers une nouvelle position en fonction de décalages aléatoires.
     * @param position La position actuelle de l'Orque.
     * @return La nouvelle position après le déplacement.
     */
    pair bouger(pair position) override;

    /**
     * @brief Détermine une nouvelle position pour une attaque en fonction de décalages aléatoires.
     * @param position La position actuelle de l'Orque.
     * @return La nouvelle position pour une attaque.
     */
    pair PositionAtt(pair position) override;

    /**
     * @brief Affiche des informations sur le guerrier Orque.
     */
    void AfficherGuerrier() override;

    /**
     * @brief Obtient l'identifiant de type pour la classe Orque.
     * @return L'identifiant de type.
     */
    int getType() override;

    /**
     * @brief Destructeur de la classe Orque.
     */
    ~Orque();
};

#endif // Orque_HPP
