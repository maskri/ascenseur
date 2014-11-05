CC=gcc
CFLAGS=-W -Wall -ansi -pedantic
EXEC=ascenseur

all: $(EXEC)

ascenseur: deplacement.o saisie.o main.o
	$(CC) -o ascenseur deplacement.o saisie.o main.o
	
deplacement.o: deplacement.c
	$(CC) -o deplacement.o -c deplacement.c $(CFLAGS)
	
saisie.o: saisie.c
	$(CC) -o saisie.o -c saisie.c $(CFLAGS)
	
main.o: main.c deplacement.h saisie.h
	$(CC) -o main.o -c main.c $(CFLAGS)
	
clean:
	rm -rf *.o
	
mrproper: clean
	rm -rf $(EXEC)