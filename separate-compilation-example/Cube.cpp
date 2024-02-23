/**
 * @file Cube.cpp
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Implementation of the Cube class.
 * @version 1.0
 * @date 2024-02-23
 */

#include "Cube.h"

/**
 * @brief Constructs a Cube object with the given length.
 * 
 * @param length The length of the cube edges.
 */
Cube::Cube(double length) {
    this->length = length;
}


/**
 * @brief Calculates and returns the volume of the cube.
 * 
 * @return The volume of the cube.
 */
double Cube::volume() const {
    return length * length * length;
}