/**
 * @file Orque.cpp
 * @brief Implementation of The Orque Class.
 *
 */
#include "Orque.hpp"

const int Orque::type = 2;

Orque::Orque()
{
    this->hp = 100;
    this->force = 30;
    this->precision = 0.2;
    this->vitesse = 30;
    this->intelligence = 20;
}

void Orque::AfficherGuerrier()
{
    std::cout << "Orque :" << std::endl;
    Guerrier::AfficherGuerrier();
}

int Orque::getType()
{
    return type;
}

void Orque::restituer()
{
    precision = 0.2;
    vitesse = 20;
}

pair Orque::bouger(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + 3*x, position.second + 3*y);

    return nv_position;
}

pair Orque::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}
Orque::~Orque() {}