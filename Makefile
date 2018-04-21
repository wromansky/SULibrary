all:
	g++ -std=c++11 -o project3 SUList.cpp SUStack.cpp SUQueue.cpp main.cpp

project3: SUList.o SUStack.o SUQueue.o main.o
	g++ -std=c++11 -o project3 SUList.o SUStack.o SUQueue.o main.o

SUList.o: SUList.cpp
	g++ -std=c++11 -c SUList.cpp

SUStack.o: SUStack.cpp
	g++ -std=c++11 -c SUStack.cpp

SUQueue.o: SUQueue.cpp
	g++ -std=c++11 -c SUQueue.cpp

main.o: main.cpp
	g++ -std=c++11 -c main.cpp
