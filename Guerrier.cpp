/**
 * @file Guerrier.cpp
 * @brief Implémentation de la classe Guerrier, qui est la classe de base.
 */

#include "Guerrier.hpp"

/**
 * @brief Constructeur par défaut de la classe Guerrier.
 * Initialise les attributs tels que les points de vie, l'intelligence, la force, la vitesse, l'ID et la précision.
 */
Guerrier::Guerrier() : hp(0), intelligence(0), force(0), vitesse(0), id(0), precision(0.0) {}

// Getters

/**
 * @brief Obtient les points de vie du Guerrier.
 * @return Les points de vie.
 */
int Guerrier::getHp() { return hp; }

/**
 * @brief Obtient l'intelligence du Guerrier.
 * @return L'intelligence.
 */
int Guerrier::getIntelligence() { return intelligence; }

/**
 * @brief Obtient la force du Guerrier.
 * @return La force.
 */
int Guerrier::getForce() { return force; }

/**
 * @brief Obtient la vitesse du Guerrier.
 * @return La vitesse.
 */
int Guerrier::getVitesse() { return vitesse; }

/**
 * @brief Obtient l'ID du Guerrier.
 * @return L'ID.
 */
int Guerrier::getId() { return id; }

/**
 * @brief Obtient le mana du Guerrier.
 * @return Le mana.
 */
int Guerrier::getMana() { return mana; }

/**
 * @brief Obtient la précision du Guerrier.
 * @return La précision.
 */
float Guerrier::getPrecision() { return precision; }

// Setters

/**
 * @brief Définit les points de vie du Guerrier.
 * @param newHp La nouvelle valeur des points de vie.
 */
void Guerrier::setHp(int newHp) { hp = newHp; }

/**
 * @brief Définit l'intelligence du Guerrier.
 * @param newIntelligence La nouvelle valeur de l'intelligence.
 */
void Guerrier::setIntelligence(int newIntelligence) { intelligence = newIntelligence; }

/**
 * @brief Définit la force du Guerrier.
 * @param newForce La nouvelle valeur de la force.
 */
void Guerrier::setForce(int newForce) { force = newForce; }

/**
 * @brief Définit la vitesse du Guerrier.
 * @param newVitesse La nouvelle valeur de la vitesse.
 */
void Guerrier::setVitesse(int newVitesse) { vitesse = newVitesse; }

/**
 * @brief Définit l'ID du Guerrier.
 * @param newId La nouvelle valeur de l'ID.
 */
void Guerrier::setId(int newId) { id = newId; }

/**
 * @brief Définit le Mana du Guerrier.
 * @param newId La nouvelle valeur du mana.
 */
void Guerrier::setMana(int newMana) { mana = newMana; }

/**
 * @brief Définit la précision du Guerrier.
 * @param newPrecision La nouvelle valeur de la précision.
 */
void Guerrier::setPrecision(float newPrecision) { precision = newPrecision; }

// Fonctions

/**
 * @brief Effectue une attaque et renvoie le résultat.
 * @return Le résultat de l'attaque.
 */
int Guerrier::attaquer()
{
    int resultat = 0;
    float random = genrand_real1();
    if (random <= precision)
    {
        resultat = force;
    }
    return resultat;
}

/**
 * @brief Réduit les points de vie du Guerrier en fonction de l'attaque reçue.
 * @param att La valeur de l'attaque.
 */
void Guerrier::reduireHp(int att)
{
    int random = genrand_int32() % 100;
    if (random >= vitesse)
    {
        hp -= att;
    }
}

/**
 * @brief Affiche des informations sur le Guerrier.
 */
void Guerrier::AfficherGuerrier()
{
    std::cout << "HP : " << hp;
    std::cout << " Intelligence : " << intelligence;
    std::cout << " Force : " << force;
    std::cout << " Vitesse : " << vitesse;
    std::cout << " Précision : " << precision << std::endl;
}

/**
 * @brief Incrémente l'ID du Guerrier.
 * @param pas L'incrément.
 */
void Guerrier::incrementId(int pas)
{
    id += pas;
}

/**
 * @brief Prend une décision : 0 pour Attaquer, 1 pour Bouger.
 * @return La valeur de la décision.
 */
int Guerrier::decider()
{
    return genrand_int32() % 2;
}

/**
 * @brief Vérifie si le Guerrier est mort.
 * @return Vrai si le Guerrier est mort, faux sinon.
 */
bool Guerrier::estMort()
{
    return (hp <= 0);
}

/**
 * @brief Vérifie si un autre Guerrier est un allié.
 * @param other L'autre Guerrier.
 * @return Vrai si l'autre Guerrier est un allié, faux sinon.
 */
bool Guerrier::estAmi(Guerrier& other)
{
    return ((this->getId() / 4) == (other.getId() / 4));
}

// Destructeur

/**
 * @brief Destructeur pour la classe Guerrier.
 */
Guerrier::~Guerrier() {}
