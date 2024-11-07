all: funcA
funcA: main.o funcA.o
	g++ -g -Wall main.o funcA.o -o funcA.elf
main.o: main.cpp
	g++ -g -Wall -c main.cpp
funcA.o: funcA.cpp funcA.h
	g++ -g -Wall -c funcA.cpp
clean:
	rm -rf -v *.o
	rm -rf -v *.gch


