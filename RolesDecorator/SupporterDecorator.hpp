// SupporterDecorator.hpp
#ifndef Supporter_DECORATOR_HPP
#define Supporter_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/SupporterRole.hpp"

class SupporterDecorator : public RoleDecorator {
public:
    SupporterDecorator(Guerrier* guerrier);
};

#endif // Supporter_DECORATOR_HPP
