
output: main.o sortb.o ssort.o
	gcc main.o sortb.o ssort.o -o output
main.o: main.c
	gcc -c main.c
sortb.o: sortb.c sortb.h
	gcc -c sortb.c
ssort.o: ssort.c 
	gcc -c ssort.c
clean:
	rm *.o output
