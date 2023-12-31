#ifndef Humain_HPP
#define Humain_HPP

#include "Guerrier.hpp"

class Humain : public Guerrier {
    public :
        static const int type;
        Humain();
        void restituer() override;
        pair bouger(pair position) override;
        pair PositionAtt(pair position) override;
        void AfficherGuerrier() override;
        int getType() override;
        ~Humain();
};
#endif