/**
 * @file Cone.cpp
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Implementation of the Cone class.
 * @version 1.0
 * @date 2024-02-23
 */

#include "Cone.h"

/**
 * @brief Constructs a Cone object with the given radius and height.
 * 
 * @param radius The radius of the cone.
 * @param height The height of the cone.
 */
Cone::Cone(double radius, double height) {
    this->radius = radius;
    this->height = height;
}

/**
 * @brief Calculates and returns the volume of the cone.
 * 
 * @return The volume of the cone.
 */
double Cone::volume() const {
    return (1.0 / 3.0) * 3.14159 * radius * radius * height;
}