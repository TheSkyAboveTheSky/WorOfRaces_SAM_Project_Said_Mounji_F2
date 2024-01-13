/**
 * @file Role.hpp
 * @brief Déclaration de la classe de base Role.
 */

#ifndef ROLE_HPP
#define ROLE_HPP

/**
 * @brief Classe de base représentant un rôle.
 *
 * Cette classe sert de classe de base pour les différents rôles du jeu.
 */
class Role {
public:
    /**
     * @brief Destructeur virtuel par défaut.
     *
     * Le destructeur virtuel par défaut assure que les classes dérivées peuvent être détruites correctement.
     */
    virtual ~Role() = default;
};

#endif // ROLE_HPP
