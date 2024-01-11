// ArcherDecorator.hpp
#ifndef Archer_DECORATOR_HPP
#define Archer_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/ArcherRole.hpp"

class ArcherDecorator : public RoleDecorator {
public:
    ArcherDecorator(Guerrier* guerrier);
};

#endif // Archer_DECORATOR_HPP
