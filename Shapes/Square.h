#include "Shape.h"

#pragma once

/// \file Square.h
/// \brief Contains the declaration of the Square class.

/// \class Square
/// \brief Represents a square shape.
class Square : public Shape 
{
    /* -------------- CONSTANTS ------------- */
    /* -------------- ATTRIBUTES ------------ */
private:
    float sideLength; ///< Length of each side of the square
    
    /* ---------- METHOD PROTOTYPES --------- */
public:
    /// \brief Default constructor for Square class.
    /// Initializes the Square with default values.
    Square();

    /// \brief Parameterized constructor for Square class.
    /// Initializes the Square with the specified colour and side length.
    /// \param colour The colour of the Square.
    /// \param sideLength The side length of the Square.
    Square(std::string colour, float sideLength);


    /// \brief Copy constructor for Square class.
    /// Initializes a new Square by copying the properties of another Square.
    /// \param secondSquare The Square object to be copied.
    Square(const Square& secondSquare);

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

    /// \brief Overloads the assignment operator for the Square class.
/// 
/// This operator assigns the properties of another Square object to this Square object.
/// 
/// \param other The Square object from which to assign properties.
/// \return A reference to this Square object after assignment.
    Square& operator=(const Square& secondSquare);

    /// \brief Overloads the addition operator for the Square class.
    /// 
    /// This operator performs addition of two Square objects.
    /// 
    /// \param other The Square object to add.
    /// \return A new Square object representing the sum of the two Square objects.
    Square operator+(const Square& secondSquare) const;

    /// \brief Overloads the multiplication operator for the Square class.
    /// 
    /// This operator performs multiplication of two Square objects.
    /// 
    /// \param other The Square object to multiply.
    /// \return A new Square object representing the product of the two Square objects.
    Square operator*(const Square& secondSquare) const;

    /// \brief Overloads the equality operator for the Square class.
    /// 
    /// This operator checks if two Square objects are equal based on their properties.
    /// 
    /// \param other The Square object to compare with.
    /// \return True if the Square objects are equal, otherwise false.
    bool operator==(const Square& secondSquare) const;


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


