/**
 * @file BersekerDecorator.hpp
 * @brief Déclaration de la classe BersekerDecorator.
 */

#ifndef BERSEKER_DECORATOR_HPP
#define BERSEKER_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/BersekerRole.hpp"

/**
 * @brief Classe représentant un décorateur pour le rôle de berserker.
 *
 * Cette classe hérite de la classe RoleDecorator et utilise le rôle de berserker.
 */
class BersekerDecorator : public RoleDecorator {
public:
    /**
     * @brief Constructeur de la classe BersekerDecorator.
     *
     * @param guerrier Pointeur vers l'objet Guerrier à décorer.
     */
    BersekerDecorator(Guerrier* guerrier);
};

#endif // BERSEKER_DECORATOR_HPP
