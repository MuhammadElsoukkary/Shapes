#include <iostream>
#include <stdio.h>


#pragma once
#ifndef __SHAPE_H__
#define __SHAPE_H__
#define MAXCHARFORNAME 50
#define MAXCHARFORCOLOUR 10

const float DEFAULTVALUEFORSIDELENGTH = 0.00;

class Shape
{
private:
	

protected:
	std::string name;
	std::string colour;
   

public:
	Shape();
	Shape(std::string name, std::string colour);
	std::string GetName(std::string name);
	std::string GetColour(std::string colour);
	bool SetName(std::string name);
	bool SetColour(std::string colour);
	virtual void Perimeter(void);
	virtual void Area(void); 
	virtual void OverallDimension(void);
};
#endif
