#include "Statistique.hpp"



Statistique::Statistique(int nbSimulation, int nbTour, SDL_Renderer* r) : nombreSimulation(nbSimulation), nombreTour(nbTour)
{
    tableau = new Simulation[nbSimulation];

    for (int i = 0; i < nombreSimulation; i++)
    {
        tableau[i].DisperserArmee();
        tableau[i].simuler(nombreTour, r);
    }
}

double Statistique::moyenneMort()
{
    double moyenne = 0;
    // Parcours de chaque simulation dans le tableau
    for (int i = 0; i < nombreSimulation; i++)
    {
        // Affiche le numéro de la simulation et le nombre de morts
        std::cout<< i << " " << tableau[i].getNombreMort() << std::endl;
        // Ajoute le nombre de morts à la somme totale
        moyenne += tableau[i].getNombreMort();

        std::cout<<"-====================================="<<std::endl;
    }

    moyenne /= (double) nombreSimulation;

    std::cout << "le nombre moyen de morts au cours de" << nombreSimulation << " simulations est : " << moyenne << std::endl;

    return moyenne;
}