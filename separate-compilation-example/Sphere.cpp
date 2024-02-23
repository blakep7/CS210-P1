/**
 * @file Sphere.cpp
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Implementation of the Sphere class.
 * @version 1.0
 * @date 2024-02-23
 */

#include "Sphere.h"

/**
 * @brief Constructs a Sphere object with the given radius.
 * 
 * @param radius The radius of the sphere.
 */
Sphere::Sphere(double radius) {
    this->radius = radius;
}

/**
 * @brief Calculates and returns the volume of the sphere.
 * 
 * @return The volume of the sphere.
 */
double Sphere::volume() const {
    return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}