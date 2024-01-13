/**
 * @file MageDecorator.hpp
 * @brief Déclaration de la classe MageDecorator.
 */

#ifndef MAGE_DECORATOR_HPP
#define MAGE_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/MageRole.hpp"

/**
 * @brief Classe représentant un décorateur pour le rôle de mage.
 *
 * Cette classe hérite de la classe RoleDecorator et utilise le rôle de mage.
 */
class MageDecorator : public RoleDecorator {
public:
    /**
     * @brief Constructeur de la classe MageDecorator.
     *
     * @param guerrier Pointeur vers l'objet Guerrier à décorer.
     */
    MageDecorator(Guerrier* guerrier);
};

#endif // MAGE_DECORATOR_HPP
