CC=gcc
CFLAGS=-I.

all: main
main: main.o functions.o 
	$(CC) -o main main.o functions.o 
main.o: functions.c
	$(CC) -c functions.c 
clean:
	rm -f *.o main
