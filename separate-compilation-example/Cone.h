/**
 * @file Cone.h
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Demonstrates the use of separate compilation.
 * @version 1.0
 * @date 2024-02-23
 */
#ifndef CONE_H
#define CONE_H

#include "Shape.h"

/**
 * @class Cone
 * @brief Represents a cone shape.
 */
class Cone : public Shape {

private:
    double radius;
    double height;

public:
    /**
     * @brief Construct a new Cone object
     * 
     * @param radius The radius of the cone.
     * @param height The height of the cone.
     */
    Cone(double radius, double height);

    /**
     * @brief Calculates the volume of the cone.
     * @return The volume of the cone.
     */
    double volume() const;

};

#endif // CONE_H