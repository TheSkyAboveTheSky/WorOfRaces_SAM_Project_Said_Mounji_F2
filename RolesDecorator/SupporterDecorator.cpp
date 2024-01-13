/**
 * @file SupporterDecorator.cpp
 * @brief Implémentation de la classe SupporterDecorator.
 */

#include "SupporterDecorator.hpp"

/**
 * @brief Constructeur de la classe SupporterDecorator.
 *
 * @param guerrier Pointeur vers l'objet Guerrier à décorer.
 */
SupporterDecorator::SupporterDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new SupporterRole()) {}
