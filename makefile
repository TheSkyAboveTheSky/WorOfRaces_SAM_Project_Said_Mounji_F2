SRC = main.cpp Humain.cpp Elfe.cpp Orque.cpp Titan.cpp Simulation.cpp Guerrier.cpp Terrain.cpp mt19937ar.c Statistique.cpp

# Compilateur
CC = g++
# Options 
CFLAGS = -lSDL2 -lSDL2_image -g -Wall -Wextra
# Liste des fichiers objets
OBJ = main.o Elfe.o Guerrier.o Titan.o Simulation.o Orque.o Terrain.o Humain.o mt19937ar.o Statistique.o
# Nom du programme final
PROGRAM = prog

# Règle de production finale
$(PROGRAM): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(PROGRAM)
	rm -rf *.o
	@echo "Lancer le programme avec ./$(PROGRAM)"

# Règle de production pour chaque fichier source
%.o: %.cpp
	$(CC) $< -c $(CFLAGS) -o $@

%.o: %.c
	$(CC) $< -c $(CFLAGS) -o $@

# Règle pour exécuter Valgrind
valgrind: $(PROGRAM)
	valgrind --leak-check=full ./$(PROGRAM)

# Règle de suppression des fichiers
clean:
	rm -rf $(PROGRAM) *.o