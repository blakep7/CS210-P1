/**
 * @file tester.cpp
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Demonstrates the use of separate compilation.
 * @version 1.0
 * @date 2024-02-23
 */

#include <iostream>

#include "Cube.h"
#include "Sphere.h"
#include "Cone.h"

int main(void) {
    Cube *cube = new Cube(3);
    Sphere *sphere = new Sphere(3);
    Cone *cone = new Cone(3, 4);
    
    std::cout << "Cube volume: Expected: 27 Result: " << cube->volume() << std::endl;
    std::cout << "Sphere volume: Expected: ~113.1 Result: " << sphere->volume() << std::endl;
    std::cout << "Cone volume: Expected ~37.7 Result: " << cone->volume() << std::endl;

    delete cube;
    delete sphere;
    delete cone;

    return 0;
}