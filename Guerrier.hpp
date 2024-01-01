#ifndef GUERRIER_HPP
#define GUERRIER_HPP

#include <iostream>
#include <utility>
#include <vector>
#include <set>
#include "mt19937ar.h"

using pair = std::pair<int,int>;

class Guerrier 
{
    protected :
        int hp;
        int intelligence;
        int force;
        int vitesse;
        int id;
        float precision;
    public :
        // Constructor
        Guerrier();
        
        // Getters 
        int getHp();
        int getIntelligence();
        int getForce();
        int getVitesse();
        int getId();
        float getPrecision();

        // Setters 
        void setHp(int);
        void setIntelligence(int);
        void setForce(int);
        void setVitesse(int);
        void setId(int);
        void setPrecision(float);

        // Fonctions
        void incrementId(int value);
        bool estMort();
        bool estAmi(Guerrier& other);
        int decider(); // { 0 : Attaquer , 1 : Bouger}
        int attaquer();
        void reduireHp(int amount);
        virtual void restituer() = 0;
        virtual pair bouger(pair position) = 0;
        virtual pair PositionAtt(pair position)= 0;
        virtual void AfficherGuerrier() = 0;
        virtual int getType() = 0;

        // Destructor
        virtual ~Guerrier();
};
#endif