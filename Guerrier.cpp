#include "Guerrier.hpp"

// Constructor
Guerrier::Guerrier() : hp(0), intelligence(0), force(0), vitesse(0), id(0) {}

// Getters
int Guerrier::getHp() { return hp; }
int Guerrier::getIntelligence() { return intelligence; }
int Guerrier::getForce() { return force; }
int Guerrier::getVitesse() { return vitesse; }
int Guerrier::getId() { return id; }

// Setters
void Guerrier::setHp(int newHp) { hp = newHp; }
void Guerrier::setIntelligence(int newIntelligence) { intelligence = newIntelligence; }
void Guerrier::setForce(int newForce) { force = newForce; }
void Guerrier::setVitesse(int newVitesse) { vitesse = newVitesse; }
void Guerrier::setId(int newId) { id = newId; }

// Destructor
Guerrier::~Guerrier() {}