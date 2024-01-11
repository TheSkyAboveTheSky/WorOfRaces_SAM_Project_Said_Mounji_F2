// SwordsmanDecorator.hpp
#ifndef SWORDSMAN_DECORATOR_HPP
#define SWORDSMAN_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/SwordsmanRole.hpp"

class SwordsmanDecorator : public RoleDecorator {
public:
    SwordsmanDecorator(Guerrier* guerrier);
};

#endif // SWORDSMAN_DECORATOR_HPP
