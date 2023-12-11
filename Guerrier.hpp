#ifndef Guerrier_HPP
#define Guerrier_HPP

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

        // Destructor
        virtual ~Guerrier();
};
#endif