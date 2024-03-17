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

string Shape::GetName()
{
	return name;
}

string Shape::GetColour()
{
	return colour;
}

bool Shape::SetName(string name)
{
	if (name == "Circle" || name == "Square" || name == "Unknown")
	{
		this->name = name;
	}
	else
	{
		this->name = "Unknown";
	}
}

bool Shape::SetColour(string colour)
{
	if (colour == "red" || colour == "green" || colour == "blue" || colour == "yellow" || colour == "purple" || colour == "pink" || colour == "orange" || colour == "undefined" || colour.length() <= MAXCHARFORCOLOUR)
	{
		this->colour = colour;

		return 
	}
	else
	{
		this->colour = "undefined";
		return false;
	}
}


