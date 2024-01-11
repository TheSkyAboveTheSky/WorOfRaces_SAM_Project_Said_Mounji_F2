// ArcherDecorator.cpp
#include "ArcherDecorator.hpp"

ArcherDecorator::ArcherDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new ArcherRole()) {}