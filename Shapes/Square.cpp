#include "Square.h"

/// \file Square.h
/// \brief Contains the implementation of the Square class.

/// \brief Default constructor for Square class.
/// Initializes the Square with default values.
Square::Square(void) : Shape("Square","undefined")
{
    sideLength = DEFAULTVALUEFORSIDELENGTH;

}

/// \brief Parameterized constructor for Square class.
/// Initializes the Square with the provided colour and side length, setting default values if necessary.
/// \param colour The colour of the Square.
/// \param sideLength The side length of the Square.
Square::Square(string colour, float sideLength) : Shape("Square", colour) {

    if (sideLength >= DEFAULTVALUEFORSIDELENGTH) 
    {
        this->sideLength = sideLength;
    }
    else 
    {
        this->sideLength = DEFAULTVALUEFORSIDELENGTH;
    }
}


Square::Square(const Square& secondSquare) : Shape(secondSquare) 
{
    this->sideLength = secondSquare.sideLength;
}


/// \brief Destructor for Square class.
/// Displays a message when the Square object is destroyed.
Square::~Square()
{
    printf("The square is squished ...\n");

}

/// \brief  Const acessor that retrieves the side length of the Square.
/// \return The side length of the Square.
float Square::GetSideLength(void) const {
    return sideLength;
}


/// \brief Retrieves the side length of the Square.
/// \return The side length of the Square.
float Square::GetSideLength(void)
{
    return sideLength;
}

/// \brief Sets the side length of the Square.
/// \param sideLength The side length to set.
/// \return True if the side length was set successfully, otherwise false.
bool Square::SetSideLength(float sideLength) 
{
    if (sideLength >= DEFAULTVALUEFORSIDELENGTH) 
    {
        return false;
    }
    else {
        this->sideLength = sideLength;
        return true;
    }
}

/// \brief Displays information about the Square.
void Square::Show(void) const 
{
    
        printf("Shape Information\n");
        printf("Name          : %s\n", GetName().c_str());
        printf("Colour        : %s\n", GetColour().c_str());
        printf("Side-Length   : %.2f cm\n", sideLength);
        printf("Perimeter     : %.2f cm\n", Perimeter());
        printf("Area          : %.2f square cm\n", Area());
}

/// \brief Assignment operator for the Square class.
/// 
/// This operator assigns the properties of another Square object to this Square object.
/// 
/// \param secondSquare The Square object from which to assign properties.
/// \return A reference to this Square object after assignment.
Square& Square::operator=(const Square& secondSquare)
{
    if (this != &secondSquare) {
        SetColour(secondSquare.GetColour()); ///< Assuming Shape has a SetColour method
        sideLength = secondSquare.sideLength;
    }
    return *this;
}

/// \brief Addition operator for the Square class.
/// 
/// This operator performs addition of two Square objects.
/// 
/// \param secondSquare The Square object to add.
/// \return A new Square object representing the sum of the two Square objects.
Square Square::operator+(const Square& secondSquare) const
{
    return Square(GetColour(), sideLength + secondSquare.sideLength);
}

/// \brief Multiplication operator for the Square class.
/// 
/// This operator performs multiplication of two Square objects.
/// 
/// \param secondSquare The Square object to multiply.
/// \return A new Square object representing the product of the two Square objects.
Square Square::operator*(const Square& secondSquare) const
{
    return Square(secondSquare.GetColour(), sideLength * secondSquare.sideLength);
}

/// \brief Equality operator for the Square class.
/// 
/// This operator checks if two Square objects are equal based on their color and side length.
/// 
/// \param secondSquare The Square object to compare with.
/// \return True if the Square objects are equal, otherwise false.
bool Square::operator==(const Square& secondSquare) const
{
    return (GetColour() == secondSquare.GetColour() &&
        fabs(sideLength - secondSquare.sideLength) < 0.01); // Example tolerance
}








/// \brief Calculates the perimeter of the Square.
/// \return The perimeter of the Square.
float Square::Perimeter(void) const
{
    float perimeter = 4 * sideLength;
    return perimeter;
}

/// \brief Calculates the area of the Square.
/// \return The area of the Square.
float Square::Area(void) const
{
    float area = sideLength * sideLength;
    return area;
}

/// \brief Retrieves the overall dimension of the Square.
/// \return The overall dimension of the Square.
float Square::OverallDimension(void) const
{
    return sideLength;
}

