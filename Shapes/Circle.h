#pragma once

#include "Shape.h"

/// <summary>
/// Circle class represents a circle shape.
/// </summary>
class Circle : public Shape
{
    /* -------------- CONSTANTS ------------- */
    /* -------------- ATTRIBUTES ------------ */
private:
    float radius;///< radius of a circle


    /* ---------- METHOD PROTOTYPES --------- */
public:
    /// <summary>
    /// Constructor for Circle class with specified colour and radius.
    /// Initializes the Circle with the provided colour and radius.
    /// </summary>
    /// <param name="colour">The colour of the Circle.</param>
    /// <param name="radius">The radius of the Circle.</param>
    Circle(string colour, float radius);

    /// <summary>
    /// Default constructor for Circle class.
    /// Initializes the Circle with default values.
    /// </summary>
    Circle(void);


    /// <summary>
   /// Copy constructor for Circle class.
   /// this constructor creates a new Circle object by copying the properties
   /// </summary>
    Circle(const Circle& rightHandSide);

    /// <summary>
    /// Destructor for Circle class.
    /// </summary>
    ~Circle(void);

    /// <summary>
    /// Retrieves the radius of the Circle.
    /// </summary>
    /// <returns>The radius of the Circle.</returns>
    float GetRadius(void);

    /// <summary>
  ///  Const acessor that retrieves the radius of the Circle.
  /// </summary>
  /// <returns>The radius of the Circle.</returns>
    float GetRadius(void) const;
    /// <summary>
    /// Sets the radius of the Circle.
    /// </summary>
    /// <param name="radius">The radius to set.</param>
    /// <returns>True if the radius was set successfully, otherwise false.</returns>
    bool SetRadius(float radius);

    /// <summary>
    /// Displays information about the Circle.
    /// </summary>
    void Show(void);

    

    /// <summary>
/// Overloads the addition operator for Circle objects.
/// </summary>
/// <param name="rhs">The Circle object to add.</param>
/// <returns>A new Circle object representing the sum of the radii.</returns>
    Circle operator+(const Circle& rightHandSide) const;

    /// <summary>
    /// Overloads the multiplication operator for Circle objects.
    /// </summary>
    /// <param name="rhs">The Circle object to multiply.</param>
    /// <returns>A new Circle object representing the product of the radii.</returns>
    Circle operator*(const Circle& rightHandSide) const;

    /// <summary>
    /// Overloads the assignment operator for Circle objects.
    /// </summary>
    /// <param name="rhs">The Circle object from which to assign properties.</param>
    /// <returns>A reference to this Circle object after assignment.</returns>
    Circle& operator=(const Circle& rightHandSide);

    /// <summary>
    /// Overloads the equality operator for Circle objects.
    /// </summary>
    /// <param name="rhs">The Circle object to compare with.</param>
    /// <returns>True if the Circle objects are equal, otherwise false.</returns>
    bool operator==(const Circle& rightHandSide) const;


    /// <summary>
    /// Calculates the perimeter of the Circle.
    /// </summary>
    /// <returns>The perimeter of the Circle.</returns>
    float Perimeter(void) const override;

    /// <summary>
    /// Calculates the area of the Circle.
    /// </summary>
    /// <returns>The area of the Circle.</returns>
    float Area(void) const override;

    /// <summary>
    /// Retrieves the overall dimension of the Circle.
    /// </summary>
    /// <returns>The overall dimension of the Circle.</returns>
    float OverallDimension(void) const override;


};

