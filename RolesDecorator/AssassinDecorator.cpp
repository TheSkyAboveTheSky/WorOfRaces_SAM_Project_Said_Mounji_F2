/**
 * @file AssassinDecorator.cpp
 * @brief Implémentation de la classe AssassinDecorator.
 */

#include "AssassinDecorator.hpp"

/**
 * @brief Constructeur de la classe AssassinDecorator.
 *
 * @param guerrier Pointeur vers l'objet Guerrier à décorer.
 */
AssassinDecorator::AssassinDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new AssassinRole()) {}
