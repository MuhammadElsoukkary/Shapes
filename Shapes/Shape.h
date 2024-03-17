#include <iostream>
#include <stdio.h>


#pragma once
#ifndef __SHAPE_H__
#define __SHAPE_H__
#define MAXCHARFORNAME 50
#define MAXCHARFORCOLOUR 10

const float DEFAULTVALUEFORSIDELENGTH = 0.00;
const float PIE = 3.1415926;

class Shape
{
private:
	

protected:
	string name;
	string colour;
   

public:
	Shape();
	Shape(string name, string colour);
	string GetName();
	std::string GetColour();
	bool SetName(string name);
	bool SetColour(string colour);
	virtual void Perimeter(void);
	virtual void Area(void); 
	virtual void OverallDimension(void);
};
#endif
