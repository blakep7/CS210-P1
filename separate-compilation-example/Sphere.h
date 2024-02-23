/**
 * @file Sphere.h
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Demonstrates the use of separate compilation.
 * @version 1.0
 * @date 2024-02-23
 */
#ifndef SPHERE_H
#define SPHERE_H

#include "Shape.h"

/**
 * @class Sphere
 * @brief Represents a sphere with a radius.
 */
class Sphere : public Shape {

private:
    double radius;

public:
    /**
     * @brief Construct a new Sphere object
     * 
     * @param radius The radius of the sphere.
     */
    Sphere(double radius);

    /**
     * @brief Calculates the volume of the sphere.
     * 
     * @return The volume of the sphere.
     */
    double volume() const;

};


#endif // SPHERE_H