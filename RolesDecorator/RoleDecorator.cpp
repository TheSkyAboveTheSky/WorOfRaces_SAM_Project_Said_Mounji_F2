/**
 * @file RoleDecorator.cpp
 * @brief Implémentation de la classe RoleDecorator.
 */

#include "RoleDecorator.hpp"

/**
 * @brief Constructeur de la classe RoleDecorator.
 *
 * @param guerrier Pointeur vers l'objet Guerrier à décorer.
 * @param role Pointeur vers le rôle à ajouter au Guerrier décoré.
 */
RoleDecorator::RoleDecorator(Guerrier* guerrier, Role* role) : Guerrier(*guerrier), role(role) {}

/**
 * @brief Destructeur de la classe RoleDecorator.
 *
 * Libère la mémoire allouée pour le rôle ajouté au Guerrier décoré.
 */
RoleDecorator::~RoleDecorator() {
    delete role;
}
