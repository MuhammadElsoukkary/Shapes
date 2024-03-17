#include "Shape.h"

#pragma once

/// <summary>
/// Square class represents a square shape.
/// </summary>
class Square : public Shape
{
private:
    float sideLength; ///< Length of each side of the square

public:
    /// <summary>
    /// Default constructor for Square class.
    /// Initializes the Square with default values.
    /// </summary>
    Square();

    /// <summary>
    /// Parameterized constructor for Square class.
    /// Initializes the Square with the specified colour and side length.
    /// </summary>
    /// <param name="colour">The colour of the Square.</param>
    /// <param name="sideLength">The side length of the Square.</param>
    Square(std::string colour, float sideLength);

    /// <summary>
    /// Destructor for Square class.
    /// </summary>
    ~Square();

    /// <summary>
    /// Retrieves the side length of the Square.
    /// </summary>
    /// <returns>The side length of the Square.</returns>
    float GetSideLength() const;

    /// <summary>
    /// Sets the side length of the Square.
    /// </summary>
    /// <param name="sideLength">The side length to set.</param>
    /// <returns>True if the side length was set successfully, otherwise false.</returns>
    bool SetSideLength(float sideLength);

    /// <summary>
    /// Displays information about the Square.
    /// </summary>
    void Show() const;

    /// <summary>
    /// Calculates the perimeter of the Square.
    /// </summary>
    /// <returns>The perimeter of the Square.</returns>
    float Perimeter() const override;

    /// <summary>
    /// Calculates the area of the Square.
    /// </summary>
    /// <returns>The area of the Square.</returns>
    float Area() const override;

    /// <summary>
    /// Retrieves the overall dimension of the Square.
    /// </summary>
    /// <returns>The overall dimension of the Square.</returns>
    float OverallDimension() const override;
};



