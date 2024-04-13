#include "Shape.h"

#pragma once

/// \file Square.h
/// \brief Contains the declaration of the Square class.

/// \class Square
/// \brief Represents a square shape.
class Square : public Shape 
{
private:
    float sideLength; ///< Length of each side of the square
    

public:
    /// \brief Default constructor for Square class.
    /// Initializes the Square with default values.
    Square();

    /// \brief Parameterized constructor for Square class.
    /// Initializes the Square with the specified colour and side length.
    /// \param colour The colour of the Square.
    /// \param sideLength The side length of the Square.
    Square(std::string colour, float sideLength);

    /// \brief Destructor for Square class.
    ~Square();

    /// \brief Retrieves the side length of the Square.
    /// \return The side length of the Square.
    float GetSideLength() const;

    /// \brief Sets the side length of the Square.
    /// \param sideLength The side length to set.
    /// \return True if the side length was set successfully, otherwise false.
    bool SetSideLength(float sideLength);

    /// \brief Displays information about the Square.
    void Show() const;

    Square& operator=(const Square& other);

    Square operator+(const Square& other) const;

    Square operator*(const Square& other) const;

    bool operator==(const Square& other) const;

    /// \brief Calculates the perimeter of the Square.
    /// \return The perimeter of the Square.
    float Perimeter() const override;

    /// \brief Calculates the area of the Square.
    /// \return The area of the Square.
    float Area() const override;

    /// \brief Retrieves the overall dimension of the Square.
    /// \return The overall dimension of the Square.
    float OverallDimension() const override;
};


