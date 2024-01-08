/**
 * @file Titan.hpp
 * @brief Déclaration de la classe Titan.
 */

#ifndef Titan_HPP
#define Titan_HPP

#include "Guerrier.hpp"
/**
 * @class Titan
 * @brief Représente la classe du guerrier Titan, dérivée de la classe de base Guerrier.
 */
class Titan : public Guerrier {
public:
    /**
     * @brief Identifiant de type constant statique pour la classe Titan.
     */
    static const int type;

    /**
     * @brief Constructeur par défaut de la classe Titan.
     * Initialise les attributs tels que les points de vie, la force, la précision, la vitesse et l'intelligence.
     */
    Titan();

    /**
     * @brief Restaure les attributs du Titan à leurs valeurs par défaut.
     */
    void restituer() override;

    /**
     * @brief Déplace le Titan vers une nouvelle position en fonction de décalages aléatoires.
     * @param position La position actuelle du Titan.
     * @return La nouvelle position après le déplacement.
     */
    pair bouger(pair position) override;

    /**
     * @brief Détermine une nouvelle position pour une attaque en fonction de décalages aléatoires.
     * @param position La position actuelle du Titan.
     * @return La nouvelle position pour une attaque.
     */
    pair PositionAtt(pair position) override;

    /**
     * @brief Affiche des informations sur le guerrier Titan.
     */
    void AfficherGuerrier() override;

    /**
     * @brief Obtient l'identifiant de type pour la classe Titan.
     * @return L'identifiant de type.
     */
    int getType() override;

    /**
     * @brief Destructeur de la classe Titan.
     */
    ~Titan();
};

#endif // Titan_HPP
