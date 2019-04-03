all: main.o hash.o clean

hash.o:hash.cpp
	g++ -std=c++17 -Wall -g hash.cpp

main.o: main.cpp
	g++ -std=c++17 -Wall -g main.cpp

clean:
	rm rf *o
