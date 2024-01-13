/**
 * @file BersekerDecorator.cpp
 * @brief Implémentation de la classe BersekerDecorator.
 */

#include "BersekerDecorator.hpp"

/**
 * @brief Constructeur de la classe BersekerDecorator.
 *
 * @param guerrier Pointeur vers l'objet Guerrier à décorer.
 */
BersekerDecorator::BersekerDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new BersekerRole()) {}
