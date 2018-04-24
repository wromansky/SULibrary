all:
	g++ -std=c++11 -o project3 payRoll.cpp main.cpp

project3: payRoll.o main.o
	g++ -std=c++11 -o project3.out payRoll.o main.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp
