
main: main.o intFrequency.o reverseString.o
	g++ main.o intFrequency.o reverseString.o -o main

main.o: main.cpp
	g++ -c main.cpp

intFrequency.o: intFrequency.cpp intFrequency.hpp
	g++ -c intFrequency.cpp
reverseString.o: reverseString.cpp reverseString.hpp
	g++ -c reverseString.cpp

clean:
	rm *.o main