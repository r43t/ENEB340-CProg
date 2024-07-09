CC=gcc

all: main
main: main.o user.o
	$(CC) -o main main.o user.o
main.o: main.c
	$(CC) -c main.c
utils.o: user.c
	$(CC) -c user.c
clean:
	rm -f *.o main