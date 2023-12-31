#include "Guerrier.hpp"

// Constructor
Guerrier::Guerrier() : hp(0), intelligence(0), precision(0.0),force(0), vitesse(0), id(0) {}

// Getters
int Guerrier::getHp() { return hp; }
int Guerrier::getIntelligence() { return intelligence; }
int Guerrier::getForce() { return force; }
int Guerrier::getVitesse() { return vitesse; }
int Guerrier::getId() { return id; }
float Guerrier::getPrecision() { return precision;}

// Setters
void Guerrier::setHp(int newHp) { hp = newHp; }
void Guerrier::setIntelligence(int newIntelligence) { intelligence = newIntelligence; }
void Guerrier::setForce(int newForce) { force = newForce; }
void Guerrier::setVitesse(int newVitesse) { vitesse = newVitesse; }
void Guerrier::setId(int newId) { id = newId; }
void Guerrier::setPrecision(float newPrecision) { precision = newPrecision;}

// Fonctions 
int Guerrier::attaquer()
{
    int resultat = 0;
    float random = genrand_real1();
    if (random<= precision)
    {
        resultat = force;
    }
    return resultat;
}
void Guerrier::reduireHp(int att)
{
    int random = genrand_int32() %100;
    if (random >= vitesse)
    {
        hp -= att;
    }
}
void Guerrier::AfficherGuerrier()
{
    std::cout << "HP : " << hp;
    std::cout << " Intelligence : " << intelligence;
    std::cout << " Force : " << force;
    std::cout << " Vitesse : " << vitesse;
    std::cout << " Precision : " << precision << std::endl;
}

void Guerrier::incrementId(int pas)
{
    id+=pas;
}

int Guerrier::decider() // { 0 : Attaquer , 1 : Bouger}
{
    return genrand_int32() % 2;
}

bool Guerrier::estMort()
{
    return (hp<=0);
}

bool Guerrier::estAmi(Guerrier& other)
{
    return ( (this->getId() / 4) == (other.getId() /4));
}

// Destructor
Guerrier::~Guerrier() {}