/* -- FILEHEADER COMMENT --
    NAME    :   myShape.cpp
    PURPOSE :   This program manages geometric shapes like squares and circles.
                Users can create, modify, and visualize shapes, specifying properties
                such as colour and dimensions. It includes classes like Square and Circle
                derived from the Shape class.
*/

#include "Shape.h" // Include the Shape class header
#include "Circle.h" // Include the Circle class header
#include "Square.h" // Include the Square class header
#include "Circle.h"


using namespace std;

/**
 * @brief Function to get an integer from user input
 *
 * @return int The integer entered by the user
 */
int getInteger(void);

/**
 * @brief Function to get a floating-point number from user input
 *
 * @return float The floating-point number entered by the user
 */
float getFloat(void);

int main(void) {
    cout << "Let's create a shape!" << endl;
    cout << "Press 1 to create a circle" << endl;
    cout << "Press 2 to create a square" << endl;

    int choice;
    cout << "Enter your choice: ";

    // Keep looping until a valid choice (1 or 2) is entered
    cout << "Please enter 1 for circle or 2 for square: ";
    while (!(cin >> choice) || (choice != 1 && choice != 2)) {
        cin.clear();  // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
        cout << "Invalid choice. Please enter 1 for circle or 2 for square: ";
    }


    string colour;
    cout << "Enter the colour of the shape: ";
    cin >> colour;

    if (choice == 1) {
        float radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        // Dynamically instantiate Circle object
        Circle* myCircle = new Circle(colour, radius);
        myCircle->Show();

        // Free memory
        delete myCircle;
    }
    else if (choice == 2) {
        float sideLength;
        cout << "Enter the side length of the square: ";
        cin >> sideLength;

        // Dynamically instantiate Square object
        Square* mySquare = new Square(colour, sideLength);
        mySquare->Show();

        // Free memory
        delete mySquare;
    }

    return 0;
}


/**
 * @brief Function to get an integer from user input
 *
 * @return int The integer entered by the user
 */
int getInteger(void)
{
    int number;
    cin >> number;
    return number;
}

/**
 * @brief Function to get a floating-point number from user input
 *
 * @return float The floating-point number entered by the user
 */
float getFloat(void)
{
    float number;
    cin >> number;
    return number;
}

