CC=gcc
CFLAGS=-I.

all: main
main: myrand.o utils.o
	$(CC) -o main myrand.o utils.o
main.o: myrand.c
	$(CC) -c main.c
functions.o: utils.c
	$(CC) -c utils.c
clean:
	rm -f *.o main
