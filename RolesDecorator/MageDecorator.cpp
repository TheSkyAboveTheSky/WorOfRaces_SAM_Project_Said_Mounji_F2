// MageDecorator.cpp
#include "MageDecorator.hpp"

MageDecorator::MageDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new MageRole()) {}