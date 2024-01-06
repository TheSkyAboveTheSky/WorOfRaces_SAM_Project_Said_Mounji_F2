/**
 * @file Elfe.hpp
 * @brief Declaration of The Elfe Class.
 *
 */
#ifndef Elfe_HPP
#define Elfe_HPP

#include "Guerrier.hpp"

class Elfe : public Guerrier {
public:
    static const int type;
    Elfe();
    void restituer() override;
    pair bouger(pair position) override;
    pair PositionAtt(pair position) override;
    void AfficherGuerrier() override;
    int getType() override;
    ~Elfe();
};
#endif