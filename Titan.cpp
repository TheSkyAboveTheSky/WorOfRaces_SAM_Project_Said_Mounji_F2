/**
 * @file Titan.cpp
 * @brief Implementation of The Titan Class.
 *
 */
#include "Titan.hpp"

const int Titan::type = 3;

Titan::Titan()
{
    this->hp = 100;
    this->force = 80;
    this->precision = 0.2;
    this->vitesse = 10;
    this->intelligence = 50;
}

void Titan::AfficherGuerrier()
{
    std::cout << "Titan :" << std::endl;
    Guerrier::AfficherGuerrier();
}

int Titan::getType()
{
    return type;
}

void Titan::restituer()
{
    precision = 0.3;
    vitesse = 10;
}

pair Titan::bouger(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + 3*x, position.second + 3*y);

    return nv_position;
}

pair Titan::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}
Titan::~Titan() {}