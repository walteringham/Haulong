#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
using namespace std;

class Triangle
{
public:
	//default constructor
	Triangle();

	//overload constructor
	Triangle(int);

	//Accessor function
	int getHeight() const;
		// getHeight returns height of triangle
		// @return int - ret

	void setHeight(int);
		//getArea - returns area of triangle
		//@param int - base of triangle
		//@return double - area of triangle

	//Destructor
	~Triangle();

	//getArea
	double getArea(int) const;
		//getArea - returns area of triangle
		//@param int - base of triangle
		//@return double - area of triangle

private:
	int height;

	
	
};
#endif
