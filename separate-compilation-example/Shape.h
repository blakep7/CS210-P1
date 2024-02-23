/**
 * @file Shape.h
 * @author Blake Pearson (bpearson7860@sdsu.edu)
 * @brief Demonstrates the use of separate compilation and the use of abstract base classes.
 * @version 1.0
 * @date 2024-02-23
 */
#ifndef SHAPE_H
#define SHAPE_H

/**
 * @class Shape
 * @brief The Shape class is an abstract base class that represents a geometric shape.
 */
class Shape {
public:
    
    /**
     * @brief Calculates and returns the volume of the shape.
     * @return The volume of the shape.
     */
    virtual double volume() const = 0;

};

#endif // SHAPE_H
