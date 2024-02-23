# Variables which specify what C++ compiler (CC) and the flags to use (CFLAGS) for quick changes
CC=g++
CFLAGS=-g -Wall

# Build targets in the follow form
# targetName: pre-requisites
#	shell/terminal command to run

# Specify the 'make all' or simply 'make' target to run the driver and clean targets
all: tester clean

# driver target is ran first, its pre-requisites are driver.o and Sphere.o, so it first
# calls the driver.o target, then the sphere.o target etc.
tester: Cone.o Cube.o Sphere.o tester.o
	$(CC) $(CFLAGS) Cone.o Cube.o Sphere.o tester.o -o tester.exe
tester.o: tester.cpp 
	$(CC) $(CFLAGS) -c tester.cpp -o tester.o
Cone.o: Cone.cpp
	$(CC) $(CFLAGS) -c Cone.cpp -o Cone.o
Cube.o: Cube.cpp
	$(CC) $(CFLAGS) -c Cube.cpp -o Cube.o
Sphere.o: Sphere.cpp
	$(CC) $(CFLAGS) -c Sphere.cpp -o Sphere.o

# Clean target removes all intermediate object files that were already linked to driver.exe
clean:
	rm *.o -f