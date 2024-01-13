/**
 * @file SwordsmanDecorator.hpp
 * @brief Déclaration de la classe SwordsmanDecorator.
 */

#ifndef SWORDSMAN_DECORATOR_HPP
#define SWORDSMAN_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/SwordsmanRole.hpp"

/**
 * @brief Classe représentant un décorateur pour le rôle d'épéiste.
 *
 * Cette classe hérite de la classe RoleDecorator et utilise le rôle d'épéiste.
 */
class SwordsmanDecorator : public RoleDecorator {
public:
    /**
     * @brief Constructeur de la classe SwordsmanDecorator.
     *
     * @param guerrier Pointeur vers l'objet Guerrier à décorer.
     */
    SwordsmanDecorator(Guerrier* guerrier);
};

#endif // SWORDSMAN_DECORATOR_HPP
