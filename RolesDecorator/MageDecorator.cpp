/**
 * @file MageDecorator.cpp
 * @brief Implémentation de la classe MageDecorator.
 */

#include "MageDecorator.hpp"

/**
 * @brief Constructeur de la classe MageDecorator.
 *
 * @param guerrier Pointeur vers l'objet Guerrier à décorer.
 */
MageDecorator::MageDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new MageRole()) {}
