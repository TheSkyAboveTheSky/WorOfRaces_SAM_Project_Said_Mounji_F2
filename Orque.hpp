#ifndef Orque_HPP
#define Orque_HPP

#include "Guerrier.hpp"

class Orque : public Guerrier {
    public:
    static const int type;
    Orque();
    void restituer() override;
    pair bouger(pair position) override;
    pair PositionAtt(pair position) override;
    void AfficherGuerrier() override;
    int getType() override;
    ~Orque();
};
#endif