#include <iostream>
#include <stdio.h>


#pragma once
#ifndef __SHAPE_H__
#define __SHAPE_H__
class Shape
{
private:
	

protected:
	std::string name;
	std::string colour;
   

public:
	Shape(std::string name, std::string colour);
	Shape();
};
#endif
