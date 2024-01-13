/**
 * @file SwordsmanDecorator.cpp
 * @brief Implémentation de la classe SwordsmanDecorator.
 */

#include "SwordsmanDecorator.hpp"

/**
 * @brief Constructeur de la classe SwordsmanDecorator.
 *
 * @param guerrier Pointeur vers l'objet Guerrier à décorer.
 */
SwordsmanDecorator::SwordsmanDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new SwordsmanRole()) {}
