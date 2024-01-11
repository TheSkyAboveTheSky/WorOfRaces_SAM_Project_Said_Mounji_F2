// AssassinDecorator.cpp
#include "AssassinDecorator.hpp"

AssassinDecorator::AssassinDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new AssassinRole()) {}