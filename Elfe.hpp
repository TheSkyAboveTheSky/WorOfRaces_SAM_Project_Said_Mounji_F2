#ifndef Elfe_HPP
#define Elfe_HPP

#include "Guerrier.hpp"

class Elfe : public Guerrier {
    static const int type;
    Elfe();
    void restituer() override;
    pair bouger(pair& position) override;
    pair PositionAtt(const pair& position) override;
    void AfficherGuerrier() override;
    int getType() override;
    ~Elfe();
}
#endif