#include "Square.h"

/// \file Square.h
/// \brief Contains the implementation of the Square class.

/// \brief Default constructor for Square class.
/// Initializes the Square with default values.
Square::Square() : Shape() {
    sideLength = DEFAULTVALUEFORSIDELENGTH;
}

/// \brief Parameterized constructor for Square class.
/// Initializes the Square with the provided colour and side length, setting default values if necessary.
/// \param colour The colour of the Square.
/// \param sideLength The side length of the Square.
Square::Square(string colour, float sideLength) : Shape("Square", colour) {
    if (sideLength >= DEFAULTVALUEFORSIDELENGTH) {
        this->sideLength = sideLength;
    }
    else {
        this->sideLength = DEFAULTVALUEFORSIDELENGTH;
    }
}

/// \brief Destructor for Square class.
/// Displays a message when the Square object is destroyed.
Square::~Square()
{
    cout << "The square is squished ..." << endl;
}

/// \brief Retrieves the side length of the Square.
/// \return The side length of the Square.
float Square::GetSideLength() const {
    return sideLength;
}

/// \brief Sets the side length of the Square.
/// \param sideLength The side length to set.
/// \return True if the side length was set successfully, otherwise false.
bool Square::SetSideLength(float sideLength) {
    if (sideLength >= DEFAULTVALUEFORSIDELENGTH) {
        return false;
    }
    else {
        this->sideLength = sideLength;
        return true;
    }
}

/// \brief Displays information about the Square.
void Square::Show() const {
    cout << "Shape Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Colour: " << colour << endl;
    cout << "Side-Length: " << sideLength << " cm" << endl;
    cout << "Perimeter: " << Perimeter() << " cm" << endl;
    cout << "Area: " << Area() << " square cm" << endl;
}

/// \brief Calculates the perimeter of the Square.
/// \return The perimeter of the Square.
float Square::Perimeter() const
{
    float perimeter = 4 * sideLength;
    return perimeter;
}

/// \brief Calculates the area of the Square.
/// \return The area of the Square.
float Square::Area() const
{
    float area = sideLength * sideLength;
    return area;
}

/// \brief Retrieves the overall dimension of the Square.
/// \return The overall dimension of the Square.
float Square::OverallDimension() const
{
    return sideLength;
}

