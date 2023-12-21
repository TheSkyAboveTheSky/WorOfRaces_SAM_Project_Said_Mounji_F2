#ifndef Guerrier_HPP
#define Guerrier_HPP

#include <utility>

using pair == std::pair<int,int>

class Guerrier 
{
    protected :
        int hp;
        int intelligence;
        int force;
        int vitesse;
        int id;
    public :
        // Constructor
        Guerrier();

        // Getters 
        int getHp();
        int getIntelligence();
        int getForce();
        int getVitesse();
        int getId();

        // Setters 
        void setHp(int);
        void setIntelligence(int);
        void setForce(int);
        void setVitesse(int);
        void setId(int);

        // Fonctions
        void incrementId(int value);
        bool estMort() const;
        bool estAmi(const Guerrier& other) const;
        int decider() const; // { 0 : Attaquer , 1 : Bouger}
        int attaquer() const;
        void reduireHp(int amount);
        virtual void restituer() const = 0;
        virtual pair bouger(pair& position) const = 0;
        virtual pair PositionAtt(const pair& position) const = 0;
        virtual void AfficherGuerrier() const = 0;
        virtual int getType() const = 0;

        // Destructor
        virtual ~Guerrier();
};
#endif