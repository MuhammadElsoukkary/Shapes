#include <stdio.h>
#include <iostream>
#include "Shape.h"

#pragma once


class Sqaure : public Shape
{
private:
	float sideLength;

public:
	Sqaure(void);
	Sqaure(std::string colour,float sideLength);
	~Sqaure(void);
	float GetSideLength(float sideLength);
	bool SetSideLength(float sideLength);
	void Show(void);

};



