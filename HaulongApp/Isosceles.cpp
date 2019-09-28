#include "pch.h"
#include "Isosceles.h"

//Default constructor
Isosceles::Isosceles()
{
	base = 0;
}

//Overload constructor
Isosceles::Isosceles(int newBase, int newSideOne, int newHeight)
: Triangle(newHeight ){
	base = newBase;
	sideOne = newSideOne;
}

//Accessor function
int Isosceles::getBase() const
{
	return base;
}

int Isosceles::getSideOne() const
{
	return sideOne;
}

//mutator function
void Isosceles::setBase(int newBase)
{
	
}


