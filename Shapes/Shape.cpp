#include "Shape.h"

Shape::Shape(void)
{
	name = "Unknown";
	colour = "undefined";
}


Shape::Shape(std::string name, std::string colour)
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

std::string Shape::GetName(std::string name)
{
	return std::string();
}

std::string Shape::GetColour(std::string colour)
{
	return std::string();
}


