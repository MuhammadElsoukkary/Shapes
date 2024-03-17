#include "Square.h"

using namespace std;

Sqaure::Sqaure(void)
{
	sideLength = DEFAULTVALUEFORSIDELENGTH;
}

Sqaure::Sqaure(string colour, float sideLength)
{
	if (sideLength <= DEFAULTVALUEFORSIDELENGTH)
	{
		this->sideLength = sideLength;
	}
	else
	{
		this->sideLength = DEFAULTVALUEFORSIDELENGTH;
	}
}

Sqaure::~Sqaure(void)
{
	printf("The square is squished ...");

}

float Sqaure::GetSideLength(float sideLength)
{
	return sideLength;
}

bool Sqaure::SetSideLength(float sideLength)
{
	if (sideLength >= DEFAULTVALUEFORSIDELENGTH)
	{
		return false;	
	}
	else
	{
	    this->sideLength = sideLength;
		return true;
	}
}


void Sqaure::Show(void)
{
}
