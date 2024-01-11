// BersekerDecorator.hpp
#ifndef Berseker_DECORATOR_HPP
#define Berseker_DECORATOR_HPP

#include "RoleDecorator.hpp"
#include "../Roles/BersekerRole.hpp"

class BersekerDecorator : public RoleDecorator {
public:
    BersekerDecorator(Guerrier* guerrier);
};

#endif // Berseker_DECORATOR_HPP
