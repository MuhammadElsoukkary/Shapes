#pragma once


#include "Shape.h"

using namespace std;


class Circle: public Shape
{
public:
	Circle(string colour, float radius);
	Circle(void);
	~Circle(void);
	float GetRadius();
	bool SetRadius(float radius);

protected:

private:
	float Radius;
};

