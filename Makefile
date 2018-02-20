CFLAGS =  -Wall -g -pedantic-errors -std=c++11

all: main.out farm str sizeof typez fn fsin rfile

main.out:	main.cpp
	g++ main.cpp ${CFLAGS}


farm:  farm.cpp
	g++ -o farm farm.cpp ${CFLAGS}


str: str.cpp
	g++ -o str str.cpp ${CFLAGS}

sizeof: sizeof.cpp
	g++ -o sizeof sizeof.cpp ${CFLAGS}

typez: typez.cpp
	g++ -o typez typez.cpp ${CFLAGS}

fn: fn.cpp
	g++ -o fn fn.cpp ${CFLAGS}

fsin: fsin.cpp
	g++ -o fsin fsin.cpp ${CFLAGS}

rfile: rfile.cpp
	g++ -o rfile rfile.cpp ${CFLAGS}
