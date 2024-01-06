#ifndef STATISTIQUE_HPP
#define STATISTIQUE_HPP

#include "Simulation.hpp"



class Statistique
{
private :
    Simulation * tableau;
    int nombreSimulation;
    int nombreTour;

public: 
    Statistique(int, int, SDL_Renderer*);
    double moyenneMort();
};

#endif