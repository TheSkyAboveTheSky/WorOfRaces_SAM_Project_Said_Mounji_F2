#include "Simulation.hpp"

Simulation::Simulation()
{
    carte = new Terrain *[TAILLE_C];

    for ( int i = 0; i < TAILLE_C; i++)
    {
        carte[i] = new Terrain[TAILLE_C];
    }

    for ( int i = 0; i < TAILLE_A; i++)
    {
        if ( i < N_HUMAIN ) 
        {
            a[0].push_back( new Humain() );
            a[1].push_back( new Humain() );
            ((Humain *) a[1][i])->incrementId(4);        
        }
        else if ( i < N_HUMAIN + N_ELFE )
        {
            a[0].push_back( new Elfe() );
            a[1].push_back( new Elfe() );

            ((Elfe *) a[1][i])->incrementId(4); 
            
            
        }
        else if ( i < N_HUMAIN + N_ELFE + N_ORQUE)
        {
            a[0].push_back( new Orque() );
            a[1].push_back( new Orque() );
            ((Orque *) a[1][i])->incrementId(4);
            
        }
        else 
        {
            a[0].push_back( new Titan() );
            a[1].push_back( new Titan() );
            ((Titan *) a[1][i])->incrementId(4);       
        }
    }

    for (int i = 0; i < TAILLE_C * TAILLE_T; i++)
    {
        for (int j = 0; j < TAILLE_C * TAILLE_T; j++)
        {
            carteGuerre[i][j] = nullptr;
        }
        
    }
}

Armee Simulation::getA1()
{
    return a[0];
}


Armee Simulation::getA2()
{
    return a[1];
}


void Simulation::setA1(Armee a)
{
    this->a[0] = a;
}


void Simulation::setA2(Armee a)
{
    this->a[1] = a;
}

void Simulation::AfficherArmees()
{
    std::cout << "-> ARMEE 1 :" << std::endl;
    for (int i = 0; i < TAILLE_A; i++)
    {
        a[0][i]->AfficherGuerrier();
    }

    std::cout << "-> ARMEE 2 :" << std::endl;
    for (int i = 0; i < TAILLE_A; i++)
    {
        a[1][i]->AfficherGuerrier();
    }
}

void Simulation::DisperserArmee()
{
    bool occupe[TAILLE_C * TAILLE_T][TAILLE_C *TAILLE_T] =  {false};

    int compteur = 0;
    int i = 0, j = 0;
    int taille = TAILLE_C * TAILLE_T;

    for ( int k = 0; k < 2; k++)
    {
        while ( compteur != TAILLE_A )
        {
            i = genrand_int32() % taille;
            j = genrand_int32() % taille;

            while (occupe[i][j])
            {
                i = genrand_int32() % taille;
                j = genrand_int32() % taille;
            }
            carte[i/TAILLE_T][j/TAILLE_T].matrice[i%TAILLE_T][j%TAILLE_T] = a[k][compteur];
            carteGuerre[i][j] = a[k][compteur];   
            compteur++;                                                
            occupe[i][j] = true;
        }

        compteur = 0;    
    }
}

Simulation::~Simulation()
{
    for ( int i = 0; i < TAILLE_A; i++)
    {
        delete a[0][i];
        delete a[1][i];
    }



    for ( int i = 0; i < TAILLE_C; i++ )
    {
        delete [] carte[i];
    }
    
    delete [] carte;
}

void Simulation::Progression()
{
    int taille = TAILLE_C * TAILLE_T;

    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < taille; j++)
        {
            if(  carteGuerre[i][j] &&  !carteGuerre[i][j]->estMort()) carteEtat[i][j] = carteGuerre[i][j];
            else if( !carteGuerre[i][j] || carteGuerre[i][j]->estMort()) carteEtat[i][j] = nullptr;
        }
    }

    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < taille; j++)
        {
            carteGuerre[i][j] = carteEtat[i][j];
        }
    }
}

void Simulation::AfficherCarte()
{
    int cmpt = 0;
    for (int i = 0; i < TAILLE_C; i++)
    {
        for (int j = 0; j < TAILLE_C; j++)
        {
            std::cout<< "Terrain " << cmpt << std::endl;
            carte[i][j].AfficherTerrain();
            cmpt++;
        }
    }
}

void Simulation::executerAtt(pair posGuerrierCour)
{
    int taille = TAILLE_C * TAILLE_T;
    Guerrier * guerrierCour = carteEtat[posGuerrierCour.first][posGuerrierCour.second];
    int type = guerrierCour->getType();
    pair nvPosition = guerrierCour->PositionAtt(posGuerrierCour);  
    int i = (nvPosition.first+taille)%taille;
    int j = (nvPosition.second+taille)%taille;
    Guerrier * ennemi =  carteEtat[i][j];                             

    switch (type)
    {
        case 0:      
            if (ennemi && !guerrierCour->estAmi(*ennemi))          
            {
                ennemi->reduireHp( guerrierCour->attaquer());

                if (ennemi->estMort())
                {
                    carteGuerre[i][j] = nullptr;                       
                    incrementerMort(ennemi);                                              
                    carte[i / TAILLE_T][j / TAILLE_T].nbMort++;
                }
            }
            
            break;

        case 1:                
            if (ennemi && !guerrierCour->estAmi(*ennemi)) 
            {
                ennemi->reduireHp( guerrierCour->attaquer());

                
                if (ennemi->estMort())
                {
                    carteGuerre[i][j] = nullptr;  
                    incrementerMort(ennemi);                                                   
                    carte[i / TAILLE_T][j / TAILLE_T].nbMort++;
                }
            }
            
            break;

        case 2:               
            if (ennemi && !guerrierCour->estAmi(*ennemi)) 
            {
                ennemi->reduireHp( guerrierCour->attaquer());

                if (ennemi->estMort())
                {
                    carteGuerre[i][j] = nullptr;  
                    incrementerMort(ennemi);                                                 
                    carte[i / TAILLE_T][j / TAILLE_T].nbMort++;
                }
            }
            
            break;
        
        case 3:
            if (ennemi && !guerrierCour->estAmi(*ennemi)) 
            {
                ennemi->reduireHp( guerrierCour->attaquer());

                if (ennemi->estMort())
                {
                    carteGuerre[i][j] = nullptr; 
                    incrementerMort(ennemi);                                                    
                    carte[i / TAILLE_T][j / TAILLE_T].nbMort++;
                }
            }
            
            break;
        default:
            break;
    }

}

void Simulation::episode()
{
    Guerrier * guerrierCour = nullptr;
    pair destination;                                    
    int taille = TAILLE_C * TAILLE_T;
    int dest_i, dest_j;

    for (int i = 0; i < taille; i++)
    {
        for (int j = 0; j < taille; j++)
        {
            guerrierCour = carteEtat[i][j];

            if (guerrierCour)          
            {
                if (guerrierCour->decider())   
                {
                    destination = guerrierCour->bouger(std::make_pair(i,j));           
                    dest_i = (destination.first + taille)%taille;
                    dest_j = (destination.second + taille)%taille;

                    if (!carteGuerre[dest_i][dest_j])        
                    {
                        carteGuerre[dest_i][dest_j] = guerrierCour;      
                        carteGuerre[i][j] = nullptr;   
                        
                        if (i / taille != (dest_i / taille) || j / taille != (dest_j / taille))  
                        {
                            guerrierCour->restituer();     
                        }
                    }
                }
                else  
                {
                    executerAtt(std::make_pair(i,j));
                }
            }
        }
        
    }
    
    Progression(); 

}

void Simulation::afficherEpisode()
{
    int taille = TAILLE_C * TAILLE_T;

    for (int i = 0; i < taille;  i++)
    {
        for (int j = 0; j < taille; j++)
        {
            if(!carteEtat[i][j]) std::cout << "[ ]" << " ";
            else
            {
                if (carteEtat[i][j]->getId() < 4)
                    std::cout<< "[" <<BLE<< carteEtat[i][j]->getType() << INIT<<"]" << " ";
                else
                    std::cout<< "[" <<RED2<< carteEtat[i][j]->getType() << INIT<<"]" << " ";
            }
        }
        std::cout<<std::endl;
    }
    
}

void Simulation::simuler(int tour, SDL_Renderer* render)
{
    Progression();
    int tmp = 0;

    bool play = false;
    bool pause = false;
    SDL_Event event;

    while( !play && tmp < tour && (getNombreMort(0) != TAILLE_A  || getNombreMort(1) != TAILLE_A -2 || getNombreMort(2) != 2*TAILLE_A - 2 ))
    {    
        while(SDL_PollEvent(&event))
        {
          switch(event.type)
          {
            case SDL_QUIT:                               
                play = true;
                break;
            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_SPACE)
                {
                    pause = !pause;
                }
                break;
            default:
                break;
          }
        }

        if (!pause && !play)
        {
            std::cout << "TOUR " << tmp++ << std::endl;
            afficherEpisode();
            SDL_display(render);
            episode();
        }

    }
}

void Simulation::SDL_display(SDL_Renderer* render)
{
    SDL_Rect rectangle = { 0, 0, 20 * TAILLE_T, 20 * TAILLE_T };
    for(int j = 0; j < TAILLE_C && rectangle.x + rectangle.w <= TAILLE_C * TAILLE_T * 20 ; j++)
    {
        for (int i = 0; i < TAILLE_C && rectangle.y <= TAILLE_C * TAILLE_T * 20; i++)
        {
            SDL_SetRenderDrawColor(render, 112, 115, 104, 255);
            SDL_RenderDrawRect(render, &rectangle);
			SDL_RenderFillRect(render, &rectangle);

			rectangle.y = rectangle.y + rectangle.h;
        }
        rectangle.y = 0;
		rectangle.x = rectangle.x + rectangle.w;
    }

	rectangle = { 0, 0, 20, 20 };
	int i = 0, j = 0;

	while (j < TAILLE_C * TAILLE_T && rectangle.x + rectangle.w <= TAILLE_C * TAILLE_T * 20)
	{
		while (i < TAILLE_C * TAILLE_T && rectangle.y <= TAILLE_C * TAILLE_T * 20)
		{
			if (carteEtat[i][j])
			{
                if (carteEtat[i][j]->getId() < 4)
                {
				    if (SDL_SetRenderDrawColor(render, 0, 0, 255, 255) != 0) std::cerr << "erreur";
                }
                else
                {
				    if (SDL_SetRenderDrawColor(render, 255, 0, 0, 255) != 0) std::cerr << "erreur";
                }

				if (SDL_RenderDrawRect(render, &rectangle) != 0) std::cerr << "erreur";

				SDL_RenderFillRect(render, &rectangle);
			}

			rectangle.y = rectangle.y + rectangle.h;
			i++;
		}

		rectangle.y = 0;
		rectangle.x = rectangle.x + rectangle.w;
		j++;
		i = 0;
	}

	SDL_RenderPresent(render);
	SDL_Delay(1000);

	if (SDL_SetRenderDrawColor(render, 0, 0, 0, 255) != 0) std::cerr << "erreur";

	SDL_RenderClear(render);
}

int Simulation::getNombreMort(int numeroArmee)
{
    if(numeroArmee == 0) return morts0.size();
    else if(numeroArmee == 1) return morts1.size();

    return morts0.size() + morts1.size();
}


void Simulation::incrementerMort(Guerrier * s)
{
    int numArmee = s->getId() / 4;

    if(numArmee  == 0) morts0.insert(s);
    else if(numArmee == 1) morts1.insert(s);
}

