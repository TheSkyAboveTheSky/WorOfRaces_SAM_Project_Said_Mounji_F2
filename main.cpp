#include "Statistique.hpp"

int main(int , char** )
{
    unsigned long init[4]={0x123, 0x234, 0x345, 0x456}, length=4;
    init_by_array(init, length);
    const char* windowTitle = "WarOfRaces Said Mounji F2";
    const int windowWidth = TAILLE_C * TAILLE_T * 20;
    const int windowHeight = TAILLE_C * TAILLE_T * 20;

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* fenetre = SDL_CreateWindow(windowTitle, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowWidth, windowHeight, SDL_WINDOW_OPENGL);

    if (!fenetre) {
        fprintf(stderr, "Error creating SDL window: %s\n", SDL_GetError());
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(fenetre, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (!renderer) {
       fprintf(stderr, "Error creating SDL renderer: %s\n", SDL_GetError());
    }
    Statistique stat(1, 600, renderer);
    stat.moyenneMort();

    return 0;
}