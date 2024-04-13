#pragma once

#include "Shape.h"

/// <summary>
/// Circle class represents a circle shape.
/// </summary>
class Circle : public Shape
{
public:
    /// <summary>
    /// Constructor for Circle class with specified colour and radius.
    /// Initializes the Circle with the provided colour and radius.
    /// </summary>
    /// <param name="colour">The colour of the Circle.</param>
    /// <param name="radius">The radius of the Circle.</param>
    Circle(string colour, float radius);

    /// <summary>
    /// Default constructor for Circle class.
    /// Initializes the Circle with default values.
    /// </summary>
    Circle(void);

    /// <summary>
    /// Destructor for Circle class.
    /// </summary>
    ~Circle(void);

    /// <summary>
    /// Retrieves the radius of the Circle.
    /// </summary>
    /// <returns>The radius of the Circle.</returns>
    float GetRadius(void);

    /// <summary>
    /// Sets the radius of the Circle.
    /// </summary>
    /// <param name="radius">The radius to set.</param>
    /// <returns>True if the radius was set successfully, otherwise false.</returns>
    bool SetRadius(float radius);

    /// <summary>
    /// Displays information about the Circle.
    /// </summary>
    void Show(void);

    

    Circle operator+(const Circle& rhs) const;

    Circle operator*(const Circle& rhs) const;

    Circle& operator=(const Circle& rhs);

    bool operator==(const Circle& rhs) const;

    /// <summary>
    /// Calculates the perimeter of the Circle.
    /// </summary>
    /// <returns>The perimeter of the Circle.</returns>
    float Perimeter(void) const override;

    /// <summary>
    /// Calculates the area of the Circle.
    /// </summary>
    /// <returns>The area of the Circle.</returns>
    float Area(void) const override;

    /// <summary>
    /// Retrieves the overall dimension of the Circle.
    /// </summary>
    /// <returns>The overall dimension of the Circle.</returns>
    float OverallDimension(void) const override;

private:
    float radius;/// radius of a circle
};

