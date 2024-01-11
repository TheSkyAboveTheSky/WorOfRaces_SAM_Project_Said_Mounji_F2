// SupporterDecorator.cpp
#include "SupporterDecorator.hpp"

SupporterDecorator::SupporterDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new SupporterRole()) {}