/**
 * @file Elfe.hpp
 * @brief Déclaration de la classe Elfe.
 */

#ifndef ELFE_HPP
#define ELFE_HPP

#include "Guerrier.hpp"

/**
 * @class Elfe
 * @brief Représente la classe du guerrier Elfe, dérivée de la classe de base Guerrier.
 */
class Elfe : public Guerrier {
public:
    /**
     * @brief Identifiant de type constant statique pour la classe Elfe.
     */
    static const int type;

    /**
     * @brief Constructeur par défaut de la classe Elfe.
     */
    Elfe();

    /**
     * @brief Restaure les attributs de l'Elfe à leurs valeurs par défaut.
     */
    void restituer() override;

    /**
     * @brief Déplace l'Elfe vers une nouvelle position en fonction de décalages aléatoires.
     * @param position La position actuelle de l'Elfe.
     * @return La nouvelle position après le déplacement.
     */
    pair bouger(pair position) override;

    /**
     * @brief Détermine une nouvelle position pour une attaque en fonction de décalages aléatoires.
     * @param position La position actuelle de l'Elfe.
     * @return La nouvelle position pour une attaque.
     */
    pair PositionAtt(pair position) override;

    /**
     * @brief Affiche des informations sur le guerrier Elfe.
     */
    void AfficherGuerrier() override;

    /**
     * @brief Obtient l'identifiant de type pour la classe Elfe.
     * @return L'identifiant de type.
     */
    int getType() override;

    /**
     * @brief Destructeur pour la classe Elfe.
     */
    ~Elfe();
};

#endif // ELFE_HPP
