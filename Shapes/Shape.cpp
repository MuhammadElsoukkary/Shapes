/// \file Shape.cpp
/// \brief Contains the implementation of the Shape class.

#include "Shape.h"

/// \brief Default constructor for Shape class.
/// Initializes name to "Unknown" and colour to "undefined".
Shape::Shape(void)
{
    name = "Unknown";
    colour = "undefined";
}

/// \brief Parameterized constructor for Shape class.
/// Sets the name and colour of the shape if valid inputs are provided.
/// \param name The name of the shape.
/// \param colour The colour of the shape.
Shape::Shape(string name, string colour)
{
    if (name == "Circle" || name == "Square" || name == "Unknown")
    {
        this->name = name;
    }
    else
    {
        this->name = "Unknown";
    }

    if (colour == "red" || colour == "green" || colour == "blue" ||
        colour == "yellow" || colour == "purple" || colour == "pink" || colour == "orange" || colour == "undefined" || colour.length() >= MAXCHARFORCOLOUR)
    {
        this->colour = colour;
    }
    else
    {
        this->colour = "undefined";
    }
}

/// \brief Retrieves the name of the shape.
/// \return The name of the shape.
string Shape::GetName()
{
    return name;
}

/// \brief Retrieves the colour of the shape.
/// \return The colour of the shape.
string Shape::GetColour()
{
    return colour;
}

/// \brief Sets the name of the shape if valid.
/// \param name The name to set.
/// \return True if name was set successfully, otherwise false.
bool Shape::SetName(string name)
{
    if (name == "Circle" || name == "Square" || name == "Unknown")
    {
        this->name = name;
        return true;
    }
    else
    {
        this->name = "Unknown";
        return false;
    }
}

/// \brief Sets the colour of the shape if valid.
/// \param colour The colour to set.
/// \return True if colour was set successfully, otherwise false.
bool Shape::SetColour(string colour)
{
    if (colour == "red" || colour == "green" || colour == "blue" || colour == "yellow" || colour == "purple" || colour == "pink" || colour == "orange" || colour == "undefined" || colour.length() < MAXCHARFORCOLOUR)
    {
        this->colour = colour;
        return true;
    }
    else
    {
        this->colour = "undefined";
        return false;
    }
}

/// \brief Calculates the perimeter of the shape.
/// \return The perimeter of the shape.
float Shape::Perimeter(void) const
{
    return 0.0f;
}

/// \brief Calculates the area of the shape.
/// \return The area of the shape.
float Shape::Area(void) const
{
    return 0.0f;
}

/// \brief Retrieves the overall dimension of the shape.
/// \return The overall dimension of the shape.
float Shape::OverallDimension(void) const
{
    return 0.0f;
}




