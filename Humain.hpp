/**
 * @file Humain.hpp
 * @brief Déclaration de la classe Humain.
 */

#ifndef Humain_HPP
#define Humain_HPP

#include "Guerrier.hpp"

/**
 * @class Humain
 * @brief Représente la classe du guerrier Humain, dérivée de la classe de base Guerrier.
 */
class Humain : public Guerrier {
public:
    /**
     * @brief Identifiant de type constant statique pour la classe Humain.
     */
    static const int type;

    /**
     * @brief Constructeur par défaut pour la classe Humain.
     * Initialise les attributs tels que les points de vie, la force, la précision, la vitesse et l'intelligence.
     */
    Humain();

    /**
     * @brief Restaure les attributs de l'Humain à leurs valeurs par défaut.
     */
    void restituer() override;

    /**
     * @brief Déplace l'Humain vers une nouvelle position en fonction de décalages aléatoires.
     * @param position La position actuelle de l'Humain.
     * @return La nouvelle position après le déplacement.
     */
    pair bouger(pair position) override;

    /**
     * @brief Détermine une nouvelle position pour une attaque en fonction de décalages aléatoires.
     * @param position La position actuelle de l'Humain.
     * @return La nouvelle position pour une attaque.
     */
    pair PositionAtt(pair position) override;

    /**
     * @brief Affiche des informations sur le guerrier Humain.
     */
    void AfficherGuerrier() override;

    /**
     * @brief Obtient l'identifiant de type pour la classe Humain.
     * @return L'identifiant de type.
     */
    int getType() override;

    /**
     * @brief Destructeur pour la classe Humain.
     */
    ~Humain();
};

#endif // Humain_HPP
