#include "Circle.h"

/// \file Circle.h
/// \brief Contains the implementation of the Circle class.

/// \brief Constructor for Circle class with specified colour and radius.
/// Initializes the Circle with the provided colour and radius, setting default values if necessary.
/// \param colour The colour of the Circle.
/// \param radius The radius of the Circle.
Circle::Circle(string colour, float Radius) : Shape("Circle", colour)
{
    if (radius >= DEFAULTVALUEFORSIDELENGTH)
    {
        this->radius = Radius;
    }
    else
    {
        this->radius = DEFAULTVALUEFORSIDELENGTH;
    }
}

/// \brief Default constructor for Circle class.
/// Initializes the Circle with default values.
Circle::Circle(void) :Shape()
{
    radius = DEFAULTVALUEFORSIDELENGTH;
}

/// \brief Destructor for Circle class.
/// Displays a message when the Circle object is destroyed.
Circle::~Circle(void)
{
    printf("The circle is broken ...");
}

/// \brief Retrieves the radius of the Circle.
/// \return The radius of the Circle.
float Circle::GetRadius()
{
    return radius;
}

/// \brief Sets the radius of the Circle if it is less than or equal to the default value for side length.
/// \param radius The radius to set.
/// \return True if the radius was set successfully, otherwise false.
bool Circle::SetRadius(float Radius)
{
    if (radius <= DEFAULTVALUEFORSIDELENGTH)
    {
        this->radius = Radius;
        return true;
    }
    else
    {
        return false;
    }

}

/// \brief Displays information about the Circle.
void Circle::Show() {
    printf("Shape Information\n");
    std::cout << "Name: " << name << std::endl;
    std::cout << "Colour: " << colour << std::endl;
    printf("Radius: %f cm\n", radius);
    printf("Circumference: %f cm\n", Perimeter()); // Call the Perimeter() method to get the circumference
    printf("Area: %f square cm\n", Area()); // Call the Area() method to get the area
}

/// \brief Calculates the perimeter of the Circle.
/// \return The perimeter of the Circle.
float Circle::Perimeter(void) const
{
    float perimeter = 2 * PIE * radius; // Calculate the perimeter using the correct formula

    return perimeter;

}

/// \brief Calculates the area of the Circle.
/// \return The area of the Circle.
float Circle::Area(void) const
{
    float area = PIE * pow(radius, 2); // Calculate the area using the pow function from <cmath>

    return area;
}

/// \brief Retrieves the overall dimension of the Circle.
/// \return The overall dimension of the Circle.
float Circle::OverallDimension(void) const
{
    float overallDimension = 2 * radius; // Calculate the diameter of the Circle

    return overallDimension;
}
