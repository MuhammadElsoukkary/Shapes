
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
    Circle round1("red", 5.5);  // red circle with radius 5.5 cm
    Circle round2("blue", 10.5);  // blue circle with radius 10.5 cm
    Circle playARound;  // default circle

    // Create specific Square objects
    Square square1("orange", 5);  // orange square with side length 5 cm
    Square square2("purple", 12);  // purple square with side length 12 cm
    Square playASquare;  // default square

    // Using overloaded operators
    playARound = round1 + round2; // Adds round1 and round2
    playASquare = square2 + square1;  // Adds square1 and square2

    // Show initial details of the shapes
    std::cout << "\nDetails of the initial Circle round1:\n";
    round1.Show();
    std::cout << "\nDetails of the initial Circle round2:\n";
    round2.Show();
    std::cout << "\nDetails of the initial Square square1:\n";
    square1.Show();
    std::cout << "\nDetails of the initial Square square2:\n";
    square2.Show();

    // Show results of addition
    std::cout << "\nResultant Circle after addition (playARound):\n";
    playARound.Show();
    std::cout << "\nResultant Square after addition (playASquare):\n";
    playASquare.Show();

    // Using multiplication operators
    playARound = round1 * round2;  // Multiplies round1 and round2
    playASquare = square2 * square1; 

    // Show results of multiplication
    std::cout << "\nResultant Circle after multiplication (playARound):\n";
    playARound.Show();
    std::cout << "\nResultant Square after multiplication (playASquare):\n";
    playASquare.Show();

    // Using equality and assignment operators
    if (playARound == round1) {
        std::cout << "\nHurray! playARound is equal to round1.\n";
    }
    else {
        std::cout << "\nAwww! playARound is not equal to round1.\n";
    }

    return 0;
}



