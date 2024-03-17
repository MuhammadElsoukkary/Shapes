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

void Circle::Show(void)
{
	printf("Shape Information\n");
	printf("Name : %s\n",name);
	printf("Radius : %f cm\n",Radius);
	printf("Circumference : 22.37 cm\n");
	printf("Area : 39.82 square cm\n");
}


