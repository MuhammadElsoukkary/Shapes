/// #include "Shape.h"

#include "Shape.h"

using namespace std;

/// <summary>
/// Default constructor for Shape class.
/// Initializes name to "Unknown" and colour to "undefined".
/// </summary>
Shape::Shape(void)
{
    name = "Unknown";
    colour = "undefined";
}

/// <summary>
/// Parameterized constructor for Shape class.
/// Sets the name and colour of the shape if valid inputs are provided.
/// </summary>
/// <param name="name">The name of the shape.</param>
/// <param name="colour">The colour of the shape.</param>
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

/// <summary>
/// Retrieves the name of the shape.
/// </summary>
/// <returns>The name of the shape.</returns>
string Shape::GetName()
{
    return name;
}

/// <summary>
/// Retrieves the colour of the shape.
/// </summary>
/// <returns>The colour of the shape.</returns>
string Shape::GetColour()
{
    return colour;
}

/// <summary>
/// Sets the name of the shape if valid.
/// </summary>
/// <param name="name">The name to set.</param>
/// <returns>True if name was set successfully, otherwise false.</returns>
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

/// <summary>
/// Sets the colour of the shape if valid.
/// </summary>
/// <param name="colour">The colour to set.</param>
/// <returns>True if colour was set successfully, otherwise false.</returns>
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

/// <summary>
/// Calculates the perimeter of the shape.
/// </summary>
/// <returns>The perimeter of the shape.</returns>
float Shape::Perimeter(void) const
{
    return 0.0f;
}

/// <summary>
/// Calculates the area of the shape.
/// </summary>
/// <returns>The area of the shape.</returns>
float Shape::Area(void) const
{
    return 0.0f;
}

/// <summary>
/// Retrieves the overall dimension of the shape.
/// </summary>
/// <returns>The overall dimension of the shape.</returns>
float Shape::OverallDimension(void) const
{
    return 0.0f;
}



