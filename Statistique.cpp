/**
 * @file Statistique.cpp
 * @brief Implémentation de la classe Statistique.
 */

#include "Statistique.hpp"

/**
 * @brief Constructeur de la classe Statistique.
 * @param nbSimulation Nombre de simulations.
 * @param nbTour Nombre de tours pour chaque simulation.
 * @param r Pointeur vers le rendu SDL.
 */
Statistique::Statistique(int nbSimulation, int nbTour, SDL_Renderer* r) : nombreSimulation(nbSimulation), nombreTour(nbTour)
{
    tableau = new Simulation[nbSimulation];

    // Initialise chaque simulation dans le tableau
    for (int i = 0; i < nombreSimulation; i++)
    {
        tableau[i].DisperserArmee();
        tableau[i].simuler(nombreTour, r);
    }
}

/**
 * @brief Calcule le nombre moyen de décès sur l'ensemble des simulations.
 * @return Le nombre moyen de décès.
 */
double Statistique::moyenneMort()
{
    double moyenne = 0;

    // Parcours chaque simulation dans le tableau
    for (int i = 0; i < nombreSimulation; i++)
    {
        // Affiche le numéro de la simulation et le nombre de décès
        std::cout << "Simulation " << i << ": " << tableau[i].getNombreMort() << " décès" << std::endl;

        // Ajoute le nombre de décès à la somme totale
        moyenne += tableau[i].getNombreMort();

        std::cout << "-=====================================" << std::endl;
    }

    moyenne /= static_cast<double>(nombreSimulation);

    // Affiche le nombre moyen de décès sur l'ensemble des simulations
    std::cout << "Le nombre moyen de décès sur " << nombreSimulation << " simulations est : " << moyenne << std::endl;

    return moyenne;
}
