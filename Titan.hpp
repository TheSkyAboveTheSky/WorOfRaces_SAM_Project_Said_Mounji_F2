#ifndef Titan_HPP
#define Titan_HPP

#include "Guerrier.hpp"

class Titan : public Guerrier {
    static const int type;
    Titan();
    void restituer() override;
    pair bouger(pair position) override;
    pair PositionAtt(pair position) override;
    void AfficherGuerrier() override;
    int getType() override;
    ~Titan();
};
#endif