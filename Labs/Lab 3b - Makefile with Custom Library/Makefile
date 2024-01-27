CFLAGS = -c -I$(HOME)/Programming/include
LFLAGS = -L$(HOME)/Programming/lib
LIBS = -ldataStructures

lab2c: ftest.o
	g++ $(LFLAGS) -o lab2c ftest.o $(LIBS)
	
ftest.o: ftest.cc
	g++ $(CFLAGS) ftest.cc

