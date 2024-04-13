#include <iostream> // Input/output stream library
#include <stdio.h> // Standard I/O functions
#include <cmath> // Math functions

using namespace std;

#pragma once
#ifndef __SHAPE_H__
#define __SHAPE_H__

#define MAXCHARFORNAME 50 // Maximum characters for name
#define MAXCHARFORCOLOUR 10 // Maximum characters for colour

const float DEFAULTVALUEFORSIDELENGTH = 0.00; // Default value for side length
const double PIE = 3.1415926; // Value of pi

/// \file Shape.h
/// \brief Contains the declaration of the Shape class.

/// \class Shape
/// \brief Represents a geometric shape.
class Shape
{
    /* -------------- CONSTANTS ------------- */
    /* -------------- ATTRIBUTES ------------ */
private:
    std::string name; ///< Name of the shape
   std::string colour; ///< Colour of the shape


   
    /* ---------- METHOD PROTOTYPES --------- */
public:
    /// \brief Default constructor for Shape class.
    /// Initializes name and colour to default values.
    Shape(void);

    /// \brief Parameterized constructor for Shape class.
    /// Initializes name and colour with provided values.
    /// \param name The name of the shape.
    /// \param colour The colour of the shape.
    Shape(string name, string colour);

    /// \brief Const acessor that retrieves the name of the shape.
    /// \return The name of the shape.
    string GetName(void) const;


    /// \brief Retrieves the name of the shape.
    /// \return The name of the shape.
    string GetName(void) ;

    /// \brief Const acessor that retrieves the colour of the shape.
    /// \return The colour of the shape.
    string GetColour(void) const;

    /// \brief  Retrieves the colour of the shape.
  /// \return The colour of the shape.
    string GetColour(void);

    /// \brief Sets the name of the shape.
    /// \param name The name to set.
    /// \return True if the name was set successfully, otherwise false.
    bool SetName(string name);

    /// \brief Sets the colour of the shape.
    /// \param colour The colour to set.
    /// \return True if the colour was set successfully, otherwise false.
    bool SetColour(string colour);

    /// \brief Calculates the perimeter of the shape.
    /// \return The perimeter of the shape.
    virtual float Perimeter(void) const = 0;

    /// \brief Calculates the area of the shape.
    /// \return The area of the shape.
    virtual float Area(void) const = 0;

    /// \brief Retrieves the overall dimension of the shape.
    /// \return The overall dimension of the shape.
    virtual float OverallDimension(void) const = 0;
};

#endif

