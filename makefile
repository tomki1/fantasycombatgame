XXFLAGS = -Wall -g -std=c++0x -pedantic-errors

output: main.o gamePlay.o character.o inputValidation.o menu.o vampire.o medusa.o harryPotter.o blueMen.o barbarian.o
	g++ ${CXXFLAGS} main.o gamePlay.o character.o inputValidation.o menu.o vampire.o medusa.o harryPotter.o blueMen.o barbarian.o -o project3

main.o: main.cpp
	g++ ${CXXFLAGS} -c main.cpp

gamePlay.o: gamePlay.cpp gamePlay.hpp
	g++ ${CXXFLAGS} -c gamePlay.cpp

character.o: character.cpp character.hpp
	g++ ${CXXFLAGS} -c character.cpp

inputValidation.o: inputValidation.cpp inputValidation.hpp
	g++ ${CXXFLAGS} -c inputValidation.cpp

menu.o: menu.cpp menu.hpp
	g++ ${CXXFLAGS} -c menu.cpp

vampire.o: vampire.cpp vampire.hpp
	g++ ${CXXFLAGS} -c vampire.cpp


medusa.o: medusa.cpp medusa.hpp
	g++ ${CXXFLAGS} -c medusa.cpp
	
harryPotter.o: harryPotter.cpp harryPotter.hpp
	g++ ${CXXFLAGS} -c harryPotter.cpp
	
blueMen.o: blueMen.cpp blueMen.hpp
	g++ ${CXXFLAGS} -c blueMen.cpp
	
barbarian.o: barbarian.cpp barbarian.hpp
	g++ ${CXXFLAGS} -c barbarian.cpp	
	
clean:
	rm *.o project3

zip:
	zip -D Project3_Tom_Kimberly.zip gamePlay.cpp character.cpp inputValidation.cpp menu.cpp vampire.cpp medusa.cpp harryPotter.cpp blueMen.cpp barbarian.cpp gamePlay.hpp character.hpp inputValidation.hpp menu.hpp vampire.hpp medusa.hpp harryPotter.hpp blueMen.hpp barbarian.hpp main.cpp makefile KimberlyTomDesign.pdf

valgrind:
	valgrind --leak-check=full --tool=memcheck --show-leak-kinds=all  --track-origins=yes project3
