/// \file Circle.cpp
/// \brief Contains the implementation of the Circle class.

#include "Circle.h"

/// \brief Constructor for Circle class with specified colour and radius.
/// Initializes the Circle with the provided colour and radius, setting default values if necessary.
/// \param colour The colour of the Circle.
/// \param radius The radius of the Circle.
Circle::Circle(string colour, float radius) : Shape("Circle", colour)
{
    if (radius >= DEFAULTVALUEFORSIDELENGTH)
    {
        this->radius = radius;
    }
    else
    {
        this->radius = DEFAULTVALUEFORSIDELENGTH;
    }
}

/// \brief Default constructor for Circle class.
/// Initializes the Circle with default values.
Circle::Circle(void) :Shape("Circle", "undefined")
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
    printf("Name          : %s\n", GetName().c_str());
    printf("Colour        : %s\n", GetColour().c_str());   
    printf("Radius        : %.2f cm\n", radius);
    printf("Circumference : %.2f cm\n", Perimeter()); 
    printf("Area          : %.2f square cm\n", Area()); 

}




// Overloading the addition operator
Circle Circle::operator+(const Circle& rhs) const
{
    float newRadius = this->radius + rhs.radius;
    return Circle(this->GetColour(), newRadius);
}

// Overloading the multiplication operator
Circle Circle::operator*(const Circle& rhs) const
{
    float newRadius = this->radius * rhs.radius;
    return Circle(rhs.GetColour(), newRadius);
}

// Overloading the assignment operator
Circle& Circle::operator=(const Circle& rhs) {
    if (this != &rhs) {
        this->Shape::operator=(rhs);
        this->radius = rhs.radius;
    }
    return *this;
}

// Overloading the equality operator
bool Circle::operator==(const Circle& rhs) const {
    const float EPSILON = 0.01; // Small variance for floating-point comparison
    return (std::abs(this->radius - rhs.radius) < EPSILON) && (this->GetColour() == rhs.GetColour());
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
