CFLAGS =  -Wall -g -pedantic-errors -std=c++11

all: fn.o fsin.o main.o str.o typez.o stopwatch.o

%.o: %.cpp
	g++ ${CFLAGS} $< -o $@

clean:
	rm -Rf *.o
