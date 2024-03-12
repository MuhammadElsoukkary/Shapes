#include <stdio.h>
#include <iostream>
#include "Shape.h"

#pragma once


class Sqaure : public Shape
{
private:
	float sideLength;

public:
	Sqaure(std::string colour,float sideLength);

};



