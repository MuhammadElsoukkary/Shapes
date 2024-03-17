#include "Circle.h"

Circle::Circle(string colour, float radius)
{
	if (radius <= DEFAULTVALUEFORSIDELENGTH)
	{
		this->Radius = radius;
	}
	else
	{
		this->Radius = DEFAULTVALUEFORSIDELENGTH;
	}
}

Circle::Circle(void)
{
	Radius = DEFAULTVALUEFORSIDELENGTH;
}

Circle::~Circle(void)
{
	printf("The circle is broken ...");
}

float Circle::GetRadius()
{
	return Radius;
}

bool Circle::SetRadius(float radius)
{
	if (radius <= DEFAULTVALUEFORSIDELENGTH)
	{
		this->Radius = radius;
		return true;
	}
	else
	{
		return false;
	}
	
}
