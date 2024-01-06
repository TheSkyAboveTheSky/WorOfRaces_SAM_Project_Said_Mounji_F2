SRC=main.cpp Humain.cpp Elfe.cpp Orque.cpp Titan.cpp Simulation.cpp Guerrier.cpp Terrain.cpp mt19937ar.c Statistique.cpp

# compilateur
CC = g++
# options 
CFLAGS =  -lSDL2 -lSDL2_image  -g -Wall -Wextra 
# liste des fichiers objets
OBJ = main.o Elfe.o Guerrier.o Titan.o Simulation.o Orque.o Terrain.o Humain.o mt19937ar.o Statistique.o
# regle de production finale tp :
prog : $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o prog  
	rm -rf  *.o
	@echo "Lancer le programme avec  ./prog"
# regle de production pour chaque fichier
main.o : main.cpp Guerrier.cpp Humain.cpp Elfe.cpp Simulation.cpp Orque.cpp Titan.cpp mt19937ar.c Statistique.cpp Terrain.cpp Titan.cpp
	$(CC) main.cpp -c $(CFLAGS)
Humain.o : Humain.cpp Humain.hpp mt19937ar.c
	$(CC) Humain.cpp -c $(CFLAGS)
Guerrier.o : Guerrier.cpp Guerrier.hpp mt19937ar.c 
	$(CC) Guerrier.cpp -c $(CFLAGS)
Titan.o : Titan.cpp Titan.hpp mt19937ar.c
	$(CC) Titan.cpp -c $(CFLAGS)
Elfe.o : Elfe.cpp Elfe.hpp mt19937ar.c
	$(CC) Elfe.cpp -c $(CFLAGS)
Orque.o : Orque.cpp Orque.hpp mt19937ar.c
	$(CC) Orque.cpp -c $(CFLAGS)
Simulation.o : Simulation.cpp Guerrier.cpp Elfe.cpp Titan.cpp Humain.cpp Orque.cpp mt19937ar.c 
	$(CC) Simulation.cpp -c $(CFLAGS)
Terrain.o : Terrain.cpp Terrain.hpp mt19937ar.c
	$(CC) Terrain.cpp -c $(CFLAGS)
mt19937ar.o : mt19937ar.c mt19937ar.h
	$(CC) mt19937ar.c -c $(CFLAGS)
Statistique.o : Statistique.cpp Statistique.hpp Simulation.cpp
	$(CC) Statistique.cpp -c $(CFLAGS)

# regle de suppression des fichiers
clean:
	rm -rf prog *.o