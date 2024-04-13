
/* -- FILEHEADER COMMENT --
    NAME    :   myShape.cpp
    PURPOSE :   This program manages geometric shapes like squares and circles.
                Users can create, modify, and visualize shapes, specifying properties
                such as colour and dimensions. It includes classes like Square and Circle
                derived from the Shape class.
    AUTHOR  :   Muhammad Elsoukkary
    DATE    :  2024-03-04
    LICENSE :   [None]
*/

#include "Shape.h" // Include the Shape class header
#include "Circle.h" // Include the Circle class header
#include "Square.h" // Include the Square class header

using namespace std;


int main(void) {
    // Create specific Circle objects
    Circle round1("red", 5.5);  // make a red circle with radius 5.5 cm
    Circle round2("blue", 10.5);  // make a blue circle with radius 10.5 cm
    Circle playARound;  // make a default circle

    // Create specific Square objects
    Square square1("orange", 5);  // create a orange square with side length 5 cm
    Square square2("purple", 12);  //create a purple square with side length 12 cm
    Square playASquare;  // default square

    // Using overloaded operators
    playARound = round1 + round2; // Adds round1 and round2
    playASquare = square2 + square1;  // Adds square1 and square2

    // Show initial details of the shapes
   // Printing details of initial Circle round1
    printf("\nDetails of the initial Circle round1:\n");
    round1.Show();

    // Printing details of initial Circle round2
    printf("\nDetails of the initial Circle round2:\n");
    round2.Show();

    // Printing details of initial Square square1
    printf("\nDetails of the initial Square square1:\n");
    square1.Show();

    // Printing details of initial Square square2
    printf("\nDetails of the initial Square square2:\n");
    square2.Show();

    // Printing resultant Circle after addition (playARound)
    printf("\nResultant Circle after addition (playARound):\n");
    playARound.Show();

    // Printing resultant Square after addition (playASquare)
    printf("\nResultant Square after addition (playASquare):\n");
    playASquare.Show();

    // Using multiplication operators

    // Multiplying round1 and round2, and printing result
    playARound = round1 * round2;
    printf("\nResultant Circle after multiplication (playARound):\n");
    playARound.Show();

    // Multiplying square2 and square1, and printing result
    playASquare = square2 * square1;
    printf("\nResultant Square after multiplication (playASquare):\n");
    playASquare.Show();

    // Using equality and assignment operators

    // Checking equality between playARound and round1, and printing result
    if (playARound == round1) 
    {
        printf("\nHurray! playARound is equal to round1.\n");
    }
    else 
    {
        printf("\nAwww! playARound is not equal to round1.\n");
    }

    return 0;
}