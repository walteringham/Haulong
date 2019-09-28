#include <iostream>
//
// HaulongApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"
#include "Isosceles.h"
using namespace std;
#include "Time.h"

int main()
{
	/*Time t1(10, 50, 59);
	t1.print();   // 10:50:59
	Time t2;
	t2.print(); // 06:39:09
	t2.setTime(6, 39, 9);
	t2.print();  // 06:39:09

	if (t1.equals(t2))
		cout << "Two objects are equal\n";
	else
		cout << "Two objects are not equal\n";*/

	//from triangle tutorial

	int base, height, equalSide;

	cout << "Please type in a base length: ";
	cin >> base;
	cout << "Please type in the height: ";
	cin >> height;
	cout << "Please type in the side that is equal: ";
	cin >> equalSide;

	Isosceles myTriangle (base, equalSide, height);
	

	return 0;
}