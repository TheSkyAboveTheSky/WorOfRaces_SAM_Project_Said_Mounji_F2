/**
 * @file Statistique.hpp
 * @brief Déclaration de la classe Statistique.
 */

#ifndef STATISTIQUE_HPP
#define STATISTIQUE_HPP

#include "Simulation.hpp"

/**
 * @class Statistique
 * @brief Représente la classe Statistique, qui calcule des statistiques basées sur des simulations.
 */
class Statistique {
private:
    /**
     * @brief Pointeur vers un tableau d'objets Simulation.
     */
    Simulation* tableau;

    /**
     * @brief Nombre de simulations dans le tableau.
     */
    int nombreSimulation;

    /**
     * @brief Nombre de tours pour chaque simulation.
     */
    int nombreTour;

public:
    /**
     * @brief Constructeur de la classe Statistique.
     * @param simulations Nombre de simulations.
     * @param tours Nombre de tours pour chaque simulation.
     * @param renderer Pointeur vers le rendu SDL.
     */
    Statistique(int simulations, int tours, SDL_Renderer* renderer);

    /**
     * @brief Calcule le nombre moyen de décès sur l'ensemble des simulations.
     * @return Le nombre moyen de décès.
     */
    double moyenneMort();
};

#endif // STATISTIQUE_HPP
