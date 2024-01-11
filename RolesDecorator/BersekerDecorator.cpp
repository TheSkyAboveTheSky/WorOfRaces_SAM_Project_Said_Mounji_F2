// BersekerDecorator.cpp
#include "BersekerDecorator.hpp"

BersekerDecorator::BersekerDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new BersekerRole()) {}