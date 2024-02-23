# Separate Compilation Example (g++)

This repository provides an example of separate compilation in C++. This example was created on a Windows machine, the steps below should work if you use GNU g++ to compile.

## Method 1: Compiling and Linking Separately

To compile and link the code using separate compilation, follow these steps:

1. Compile each source file (`Sphere.cpp`, `Cube.cpp`, `Cone.cpp`, and `tester.cpp`) into object files using the following commands:
```bash
g++ -Wall -c Sphere.cpp -o Sphere.o
g++ -Wall -c Cube.cpp -o Cube.o
g++ -Wall -c Cone.cpp -o Cone.o
g++ -Wall -c tester.cpp -o tester.o
```

2. Link each object file together and compile the executable.
```bash
g++ -Wall Sphere.o Cube.o Cone.o tester.o -o tester.exe
```

## Method 2: Compiling and Linking Single Command

To compile and link the code using a single command
```bash
g++ -Wall Sphere.cpp Cube.cpp Cone.cpp tester.cpp -o tester.exe
```

## Method 3: Makefile (Reccomended)

1. Create a Makefile similar to the one shown [Makefile](Makefile)

2. Run the make command in your terminal
```bash
make
```
