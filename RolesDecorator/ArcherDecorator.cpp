/**
 * @file ArcherDecorator.cpp
 * @brief Implémentation de la classe ArcherDecorator.
 */

#include "ArcherDecorator.hpp"

/**
 * @brief Constructeur de la classe ArcherDecorator.
 *
 * @param guerrier Pointeur vers l'objet Guerrier à décorer.
 */
ArcherDecorator::ArcherDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new ArcherRole()) {}
