#include <iostream> // Input/output stream library
#include <stdio.h> // Standard I/O functions
#include <cmath> // Math functions


using namespace std;
#pragma once
#ifndef __SHAPE_H__
#define __SHAPE_H__

#define MAXCHARFORNAME 50 // Maximum characters for name
#define MAXCHARFORCOLOUR 10 // Maximum characters for colour

const float DEFAULTVALUEFORSIDELENGTH = 0.00; // Default value for side length
const double PIE = 3.1415926; // Value of pi

/// <summary>
/// Shape class represents a geometric shape.
/// </summary>
class Shape
{
private:
    // No private members

protected:
    std::string name; // Name of the shape
    std::string colour; // Colour of the shape

public:
    /// <summary>
    /// Default constructor for Shape class.
    /// Initializes name and colour to default values.
    /// </summary>
    Shape();

    /// <summary>
    /// Parameterized constructor for Shape class.
    /// Initializes name and colour with provided values.
    /// </summary>
    /// <param name="name">The name of the shape.</param>
    /// <param name="colour">The colour of the shape.</param>
    Shape(string name, string colour);

    /// <summary>
    /// Retrieves the name of the shape.
    /// </summary>
    /// <returns>The name of the shape.</returns>
    string GetName(void);

    /// <summary>
    /// Retrieves the colour of the shape.
    /// </summary>
    /// <returns>The colour of the shape.</returns>
   string GetColour();

    /// <summary>
    /// Sets the name of the shape.
    /// </summary>
    /// <param name="name">The name to set.</param>
    /// <returns>True if the name was set successfully, otherwise false.</returns>
    bool SetName(string name);

    /// <summary>
    /// Sets the colour of the shape.
    /// </summary>
    /// <param name="colour">The colour to set.</param>
    /// <returns>True if the colour was set successfully, otherwise false.</returns>
    bool SetColour(string colour);

    /// <summary>
    /// Calculates the perimeter of the shape.
    /// </summary>
    /// <returns>The perimeter of the shape.</returns>
    virtual float Perimeter(void) const;

    /// <summary>
    /// Calculates the area of the shape.
    /// </summary>
    /// <returns>The area of the shape.</returns>
    virtual float Area(void) const;

    /// <summary>
    /// Retrieves the overall dimension of the shape.
    /// </summary>
    /// <returns>The overall dimension of the shape.</returns>
    virtual float OverallDimension(void) const;
};

#endif
