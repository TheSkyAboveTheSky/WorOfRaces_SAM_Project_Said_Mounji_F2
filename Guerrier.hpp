/**
 * @file Guerrier.hpp
 * @brief Déclaration de la classe Guerrier.
 */

#ifndef GUERRIER_HPP
#define GUERRIER_HPP

#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include "mt19937ar.h"

using pair = std::pair<int, int>;

/**
 * @class Guerrier
 * @brief Représente la classe de base pour les guerriers.
 */
class Guerrier {
protected:
    int hp;               /**< Points de vie du guerrier. */
    int intelligence;     /**< Niveau d'intelligence du guerrier. */
    int force;            /**< Force du guerrier. */
    int vitesse;          /**< Vitesse du guerrier. */
    int id;               /**< Identifiant unique du guerrier. */
    float precision;      /**< Précision des attaques du guerrier. */

public:
    // Constructeur

    /**
     * @brief Constructeur par défaut de la classe Guerrier.
     * Initialise les attributs tels que les points de vie, l'intelligence, la force, la vitesse, l'ID et la précision.
     */
    Guerrier();

    // AGetters

    int getHp();           /**< Obtient les points de vie du guerrier. */
    int getIntelligence(); /**< Obtient le niveau d'intelligence du guerrier. */
    int getForce();        /**< Obtient la force du guerrier. */
    int getVitesse();      /**< Obtient la vitesse du guerrier. */
    int getId();           /**< Obtient l'identifiant unique du guerrier. */
    float getPrecision();  /**< Obtient la précision des attaques du guerrier. */

    // Setters

    void setHp(int newHp);           /**< Définit les points de vie du guerrier. */
    void setIntelligence(int newIntelligence); /**< Définit le niveau d'intelligence du guerrier. */
    void setForce(int newForce);     /**< Définit la force du guerrier. */
    void setVitesse(int newVitesse); /**< Définit la vitesse du guerrier. */
    void setId(int newId);           /**< Définit l'identifiant unique du guerrier. */
    void setPrecision(float newPrecision);   /**< Définit la précision des attaques du guerrier. */

    // Fonctions

    /**
     * @brief Incrémente l'identifiant unique du guerrier.
     * @param value L'incrément.
     */
    void incrementId(int value);

    /**
     * @brief Vérifie si le guerrier est mort.
     * @return Vrai si le guerrier est mort, faux sinon.
     */
    bool estMort();

    /**
     * @brief Vérifie si un autre guerrier est un allié.
     * @param other L'autre guerrier.
     * @return Vrai si l'autre guerrier est un allié, faux sinon.
     */
    bool estAmi(Guerrier& other);

    /**
     * @brief Prend une décision : 0 pour Attaquer, 1 pour Bouger.
     * @return La valeur de la décision.
     */
    int decider(); // { 0 : Attaquer , 1 : Bouger}

    /**
     * @brief Effectue une attaque et renvoie le résultat.
     * @return Le résultat de l'attaque.
     */
    int attaquer();

    /**
     * @brief Réduit les points de vie du guerrier en fonction de l'attaque reçue.
     * @param amount La valeur de l'attaque.
     */
    void reduireHp(int amount);

    /**
     * @brief Restaure les attributs du guerrier (fonction virtuelle à surcharger par les classes dérivées).
     */
    virtual void restituer() = 0;

    /**
     * @brief Déplace le guerrier vers une nouvelle position (fonction virtuelle à surcharger par les classes dérivées).
     * @param position La position actuelle du guerrier.
     * @return La nouvelle position après le déplacement.
     */
    virtual pair bouger(pair position) = 0;

    /**
     * @brief Détermine une nouvelle position pour une attaque (fonction virtuelle à surcharger par les classes dérivées).
     * @param position La position actuelle du guerrier.
     * @return La nouvelle position pour une attaque.
     */
    virtual pair PositionAtt(pair position) = 0;

    /**
     * @brief Affiche des informations sur le guerrier (fonction virtuelle à surcharger par les classes dérivées).
     */
    virtual void AfficherGuerrier() = 0;

    /**
     * @brief Obtient l'identifiant de type pour le guerrier (fonction virtuelle à surcharger par les classes dérivées).
     * @return L'identifiant de type.
     */
    virtual int getType() = 0;

    // Destructeur

    /**
     * @brief Destructeur virtuel de la classe Guerrier.
     */
    virtual ~Guerrier();
};

#endif // GUERRIER_HPP
