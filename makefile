all: main.o sieve.o sieve.h
	gcc main.o sieve.o

main.o: main.c sieve.h
	gcc -c main.c

sieve.o: sieve.c sieve.h
	gcc -c sieve.c

run:
	./a.out 1000

clean:
	rm *.o
