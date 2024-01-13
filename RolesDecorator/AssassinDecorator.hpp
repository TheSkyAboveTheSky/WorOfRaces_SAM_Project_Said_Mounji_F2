/**
 * @file AssassinDecorator.hpp
 * @brief Déclaration de la classe AssassinDecorator.
 */

#ifndef ASSASSIN_DECORATOR_HPP
#define ASSASSIN_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/AssassinRole.hpp"

/**
 * @brief Classe représentant un décorateur pour le rôle d'assassin.
 *
 * Cette classe hérite de la classe RoleDecorator et utilise le rôle d'assassin.
 */
class AssassinDecorator : public RoleDecorator {
public:
    /**
     * @brief Constructeur de la classe AssassinDecorator.
     *
     * @param guerrier Pointeur vers l'objet Guerrier à décorer.
     */
    AssassinDecorator(Guerrier* guerrier);
};

#endif // ASSASSIN_DECORATOR_HPP
