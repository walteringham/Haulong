#ifndef ISOSCELES_H
#define ISOSCELES_H

#include <iostream>
#include "Triangle.h"
using namespace std;

class Isosceles :public Triangle
{
public:
	//default contructor
	Isosceles();

	//overload constructor
	Isosceles(int, int, int);

	//Accessor function
	int getBase() const;
	//getBase - returns base of triangle
	//@return int - base length of triangle

	int getSideOne() const;

	//Mutator function
	void setBase(int);
		//setBase - sets base length of triangle
		// @param int = base length of triangle

	void setSideOne(int);

	//Destructor
	~Isosceles();

	int getPerimeter() const;
		//getPerimeter - returns perimeter of triangle
		// @return int - perimeter of triangle

	void printInfo() const;
		// printInfo - prints the perimeter and area of triangle

private:
	int base;
	int sideOne{};
};

#endif
