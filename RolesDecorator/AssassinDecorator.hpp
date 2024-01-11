// AssasinDecorator.hpp
#ifndef Assassin_DECORATOR_HPP
#define Assassin_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/AssassinRole.hpp"

class AssassinDecorator : public RoleDecorator {
public:
    AssassinDecorator(Guerrier* guerrier);
};

#endif // Assassin_DECORATOR_HPP
