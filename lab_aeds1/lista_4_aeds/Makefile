all: p5.o p5_main.o
	gcc p5_main.o p5.o -o p5_main

p5.o: p5.c p5.h
	gcc -c p5.c

p5_main.o: p5_main.c
	gcc -c p5_main.c

run: p5_main
	./p5_main < entrada.txt