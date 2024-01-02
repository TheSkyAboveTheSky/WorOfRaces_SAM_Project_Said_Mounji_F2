#include "Elfe.hpp"

const int Elfe::type = 1;

Elfe::Elfe()
{
    this->hp = 100;
    this->force = 20;
    this->precision = 0.4;
    this->vitesse = 70;
    this->intelligence = 100;
}

void Elfe::AfficherGuerrier()
{
    std::cout << "Elfe :" << std::endl;
    Guerrier::AfficherGuerrier();
}

int Elfe::getType()
{
    return type;
}

void Elfe::restituer()
{
    precision = 0.3;
    vitesse = 60;
}

pair Elfe::bouger(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + 3*x, position.second + 3*y);

    return nv_position;
}

pair Elfe::PositionAtt(pair position)
{
    int x = genrand_int32() % 3;
    int y = genrand_int32() % 3;
    x--;
    y--;
    pair nv_position = std::make_pair(position.first + x, position.second + y);

    return nv_position;
}

Elfe::~Elfe() {}