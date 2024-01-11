#ifndef ROLE_DECORATOR_HPP
#define ROLE_DECORATOR_HPP

#include "../Guerrier.hpp"
#include "../Roles/Role.hpp"

class RoleDecorator : public Guerrier {
    protected:
        Role * role;
    public:
        RoleDecorator(Guerrier * guerrier, Role * role);
        ~RoleDecorator();
};
#endif // ROLE_DECORATOR_HPP