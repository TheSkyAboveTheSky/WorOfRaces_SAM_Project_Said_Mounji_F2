#include "Humain.hpp"

const int Humain::type = 1;

Humain::Humain() : hp(100),intelligence(100),force(100),vitesse(60),id(type) {}

Humain::~Humain() {}