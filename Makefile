CFLAGS =  -Wall -g -pedantic-errors -std=c++11

all: main.out farm

main.out:	main.cpp
	g++ main.cpp ${CFLAGS}


farm:  farm.cpp
	g++ -o farm farm.cpp ${CFLAGS}


