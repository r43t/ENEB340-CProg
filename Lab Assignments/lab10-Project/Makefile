CC=gcc

all: main
main: main.o users.o
	$(CC) -o main main.o users.o
main.o: main.c
	$(CC) -c main.c
utils.o: users.c
	$(CC) -c users.c
clean:
	rm -f *.o main