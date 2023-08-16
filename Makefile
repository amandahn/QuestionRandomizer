# Makefile

all: qr

# Full Compile
qr: qr.o 
	g++ -Wall -o qr qr.o 

qr.o: qr.cpp 
	g++ -Wall -c qr.cpp



# Makefile Template
# Full Compile
# proj: FileOne.o FileTwo.o 
#	g++ -Wall -o proj FileOne.o FileTwo.o 

# Compiling .cpp file with header files
# FileOne.o: FileOne.cpp FileTwo.h 
#	g++ -Wall -c FileOne.cpp

# Header File example
# FileTwo.o: FileTwo.h FileTwo.cpp
#	g++ -Wall -c FileTwo.cpp

clean:
	rm -f wi *.o