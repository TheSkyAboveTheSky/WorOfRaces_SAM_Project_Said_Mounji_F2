// SwordsmanDecorator.cpp
#include "SwordsmanDecorator.hpp"

SwordsmanDecorator::SwordsmanDecorator(Guerrier* guerrier)
    : RoleDecorator(guerrier, new SwordsmanRole()) {}