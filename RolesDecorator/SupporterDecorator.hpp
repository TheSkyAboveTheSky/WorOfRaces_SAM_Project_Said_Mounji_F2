/**
 * @file SupporterDecorator.hpp
 * @brief Déclaration de la classe SupporterDecorator.
 */

#ifndef SUPPORTER_DECORATOR_HPP
#define SUPPORTER_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/SupporterRole.hpp"

/**
 * @brief Classe représentant un décorateur pour le rôle de soutien.
 *
 * Cette classe hérite de la classe RoleDecorator et utilise le rôle de soutien.
 */
class SupporterDecorator : public RoleDecorator {
public:
    /**
     * @brief Constructeur de la classe SupporterDecorator.
     *
     * @param guerrier Pointeur vers l'objet Guerrier à décorer.
     */
    SupporterDecorator(Guerrier* guerrier);
};

#endif // SUPPORTER_DECORATOR_HPP
