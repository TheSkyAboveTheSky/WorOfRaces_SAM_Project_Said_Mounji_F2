/**
 * @file Simulation.hpp
 * @brief Déclaration de la classe Simulation.
 */

#ifndef SIMULATION__H
#define SIMULATION__H

#include <SDL2/SDL.h>
#include <utility>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include "Guerrier.hpp"
#include "Humain.hpp"
#include "Elfe.hpp"
#include "Orque.hpp"
#include "Titan.hpp"
#include "Terrain.hpp"

const int TAILLE_A = 162;
const int TAILLE_C = 3;
const int N_HUMAIN = 80;
const int N_ELFE = 42;
const int N_ORQUE = 30;
const int N_TITAN = 10;

#define ARMEE1     "\x1b[92m"
#define NEUTRAL    "\x1b[0m"
#define ARMEE2    "\x1b[91m"

typedef std::vector<Guerrier *> Armee;

/**
 * @class Simulation
 * @brief Représente la simulation du jeu de guerre.
 */
class Simulation {
    Armee a[2];
    Guerrier *carteGuerre[TAILLE_C * TAILLE_T][TAILLE_C * TAILLE_T];
    Guerrier *carteEtat[TAILLE_C * TAILLE_T][TAILLE_C * TAILLE_T];

public:
    Terrain **carte;
    std::set<Guerrier *> morts0;
    std::set<Guerrier *> morts1;

    // Constructeur
    Simulation();
    // Getters & Setters pour les armées
    Armee getA1();
    Armee getA2();
    void setA1(Armee);
    void setA2(Armee);
    // Fonctions pour la gestion des armees
    void AfficherArmees();
    void DisperserArmee();
    void Progression();
    // Fonctions pour la gestion de la carte
    void AfficherCarte();
    void executerAtt(pair);
    // Fonction pour la gestion de la simulation
    void episode();
    void afficherEpisode();
    void simuler(int, SDL_Renderer *);
    void SDL_display(SDL_Renderer *);
    // Fonctions pour la gestion des morts
    int getNombreMort(int numeroArmee = 2);
    void incrementerMort(Guerrier *);
    // Destructeur
    ~Simulation();
};

#endif
