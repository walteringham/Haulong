#include "pch.h"
#include "Triangle.h"

//default constructor
Triangle::Triangle()
{
	height = 0;
}

//overload Triangle
Triangle::Triangle(int newHeight)
{
	height = newHeight;
}

//Accessor function
int Triangle::getHeight() const
{
	return height;
}

//Mutator function
void Triangle::setHeight(int newHeight)
{
	height = newHeight;
}

//Destructor
Triangle::~Triangle()
{
	
}

//getArea
double Triangle::getArea(int base) const
{
	return (0.5*base*height);
}

