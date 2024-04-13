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

Circle::Circle(const Circle& rightHandSide) : Shape(rightHandSide) 
{
    this->radius = rightHandSide.radius;
}


/// \brief Destructor for Circle class.
/// Displays a message when the Circle object is destroyed.
Circle::~Circle(void)
{
    printf("The circle is broken ...\n");
}

/// \brief Retrieves the radius of the Circle.
/// \return The radius of the Circle.
float Circle::GetRadius(void)
{
    return radius;
}


/// \brief Const acessor that retrieves the radius of the Circle.
/// \return The radius of the Circle
float Circle::GetRadius(void) const
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
void Circle::Show(void) {
    printf("Shape Information\n");
    printf("Name          : %s\n", GetName().c_str());
    printf("Colour        : %s\n", GetColour().c_str());   
    printf("Radius        : %.2f cm\n", radius);
    printf("Circumference : %.2f cm\n", Perimeter()); 
    printf("Area          : %.2f square cm\n", Area()); 

}



/// \brief Overloads the addition operator for Circle objects.
/// 
/// This operator performs addition of two Circle objects by adding their radii.
/// 
/// \param rightHandSide The Circle object to add.
/// \return A new Circle object representing the sum of the two Circle objects.
Circle Circle::operator+(const Circle& rightHandSide) const
{
    float newRadius = this->radius + rightHandSide.radius;
    return Circle(this->GetColour(), newRadius);
}

/// \brief Overloads the multiplication operator for Circle objects.
/// 
/// This operator performs multiplication of two Circle objects by multiplying their radii.
/// 
/// \param rightHandSide The Circle object to multiply.
/// \return A new Circle object representing the product of the two Circle objects.
Circle Circle::operator*(const Circle& rightHandSide) const
{
    float newRadius = this->radius * rightHandSide.radius;
    return Circle(rightHandSide.GetColour(), newRadius);
}

/// \brief Overloads the assignment operator for Circle objects.
/// 
/// This operator assigns the properties of another Circle object to this Circle object.
/// 
/// \param rightHandSide The Circle object from which to assign properties.
/// \return A reference to this Circle object after assignment.
Circle& Circle::operator=(const Circle& rightHandSide)
{
    if (this != &rightHandSide) {
        this->Shape::operator=(rightHandSide);
        this->radius = rightHandSide.radius;
    }
    return *this;
}

/// \brief Overloads the equality operator for Circle objects.
/// 
/// This operator checks if two Circle objects are equal based on their radii and color.
/// 
/// \param rightHandSide The Circle object to compare with.
/// \return True if the Circle objects are equal, otherwise false.
bool Circle::operator==(const Circle& rightHandSide) const
{
    const float EPSILON = 0.01; // Small variance for floating-point comparison
    return (std::abs(this->radius - rightHandSide.radius) < EPSILON) && (this->GetColour() == rightHandSide.GetColour());
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
