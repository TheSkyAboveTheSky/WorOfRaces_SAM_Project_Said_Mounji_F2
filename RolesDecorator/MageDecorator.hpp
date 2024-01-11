// MageDecorator.hpp
#ifndef Mage_DECORATOR_HPP
#define Mage_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/MageRole.hpp"

class MageDecorator : public RoleDecorator {
public:
    MageDecorator(Guerrier* guerrier);
};

#endif // Mage_DECORATOR_HPP
