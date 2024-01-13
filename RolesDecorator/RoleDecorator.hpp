/**
 * @file RoleDecorator.hpp
 * @brief Déclaration de la classe RoleDecorator.
 */

#ifndef ROLE_DECORATOR_HPP
#define ROLE_DECORATOR_HPP

#include "../Guerrier.hpp"
#include "../Roles/Role.hpp"

/**
 * @brief Classe représentant un décorateur de rôle pour un Guerrier.
 *
 * Cette classe hérite de Guerrier et contient un pointeur vers un rôle à ajouter.
 */
class RoleDecorator : public Guerrier {
protected:
    Role* role; /**< Pointeur vers le rôle ajouté au Guerrier décoré. */

public:
    /**
     * @brief Constructeur de la classe RoleDecorator.
     *
     * @param guerrier Pointeur vers l'objet Guerrier à décorer.
     * @param role Pointeur vers le rôle à ajouter au Guerrier décoré.
     */
    RoleDecorator(Guerrier* guerrier, Role* role);

    /**
     * @brief Destructeur de la classe RoleDecorator.
     *
     * Libère la mémoire allouée pour le rôle ajouté au Guerrier décoré.
     */
    ~RoleDecorator();
};

#endif // ROLE_DECORATOR_HPP
