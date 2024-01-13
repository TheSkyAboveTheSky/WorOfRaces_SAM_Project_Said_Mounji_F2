/**
 * @file ArcherDecorator.hpp
 * @brief Déclaration de la classe ArcherDecorator.
 */

#ifndef ARCHER_DECORATOR_HPP
#define ARCHER_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/ArcherRole.hpp"

/**
 * @brief Classe représentant un décorateur pour le rôle d'archer.
 *
 * Cette classe hérite de la classe RoleDecorator et utilise le rôle d'archer.
 */
class ArcherDecorator : public RoleDecorator {
public:
    /**
     * @brief Constructeur de la classe ArcherDecorator.
     *
     * @param guerrier Pointeur vers l'objet Guerrier à décorer.
     */
    ArcherDecorator(Guerrier* guerrier);
};

#endif // ARCHER_DECORATOR_HPP
