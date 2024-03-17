#include "Shape.h"

using namespace std;

Shape::Shape(void)
{
	name = "Unknown";
	colour = "undefined";
}


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

	if (colour == "red" || colour == "green" || colour == "blue" || colour == "yellow" || colour == "purple" || colour == "pink" || colour == "orange" || colour == "undefined" || colour.length() <= MAXCHARFORCOLOUR)
	{
		this->colour = colour;
	}
	else
	{
		this->colour = "undefined";
	}

}

string Shape::GetName (string name)
{
	return string();
}

string Shape::GetColour(std::string colour)
{
	return string();
}


