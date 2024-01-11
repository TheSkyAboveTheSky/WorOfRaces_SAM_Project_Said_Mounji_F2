// RoleDecorator.cpp
#include "RoleDecorator.hpp"

RoleDecorator::RoleDecorator(Guerrier* guerrier, Role* role) : Guerrier(*guerrier), role(role) {}

RoleDecorator::~RoleDecorator() {
    delete role;
}