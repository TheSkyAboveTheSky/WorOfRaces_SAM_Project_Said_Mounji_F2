/**
 * @file Humain.cpp
 * @brief Implementation of The Humain Class.
 *
 */
#include "Humain.hpp"

const int Humain::type = 0;

Humain::Humain() {
    this->hp = 100;
    this->force = 10;
    this->precision = 0.5;
    this->vitesse = 60;
    this->intelligence = 60;
}


void Humain::AfficherGuerrier()
{
    std::cout << "Humain :" << std::endl;
    Guerrier::AfficherGuerrier();
}

int Humain::getType()
{
    return type;
}

void Humain::restituer()
{
    precision = 0.5;
    vitesse = 60;
}

pair Humain::bouger(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + 3*x, position.second + 3*y);

    return nv_position;
}

pair Humain::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}

Humain::~Humain() {}