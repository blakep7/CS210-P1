/**
 * @file Cube.h
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Demonstrates the use of separate compilation.
 * @version 1.0
 * @date 2024-02-23
 */
#ifndef CUBE_H
#define CUBE_H

#include "Shape.h"

/**
 * @class Cube
 * @brief Represents a cube with length.
 */
class Cube : public Shape {

private:
    double length;

public:
    /**
     * @brief Construct a new Cube object
     * 
     * @param length The length of the cube's edges.
     */
    Cube(double length);

    /**
     * @brief Calculates the volume of the sphere.
     * @return The volume of the sphere.
     */
    double volume() const;

};

#endif // CUBE_H