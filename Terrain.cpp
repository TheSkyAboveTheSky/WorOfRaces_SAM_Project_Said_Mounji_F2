/**
 * @file Terrain.cpp
 * @brief Implementation of The Terrain Class.
 *
 */
#include "Terrain.hpp"

Terrain::Terrain()
{
    nbMort = 0;
    for (int i =0;i<TAILLE_T;i++)
    {
        for (int j=0;j<TAILLE_T;j++)
        {
            matrice[i][j] = nullptr;
        }
    }
}

void Terrain::AfficherTerrain()
{
    for(int i =0;i<TAILLE_T;i++)
    {
        for ( int j=0;j<TAILLE_T;j++)
        {
            if (matrice[i][j] != nullptr) 
            {
                matrice[i][j]->AfficherGuerrier();
            }
        }
        std::cout<<std::endl;
    }
} 