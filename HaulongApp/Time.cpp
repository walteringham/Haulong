#include "pch.h"
#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(const int h, const int m, const int s)
	: hour(h), minute(m), second(s)
{}

void Time::setTime(const int h, const int m, const int s)
{
	hour = h;
	minute = m;
	second = s;
}

void Time::print() const
{
	cout << setw(2) << setfill('0') << hour << ":"
		<< setw(2) << setfill('0') << minute << ":"
		<< setw(2) << setfill('0') << second << "\n";

}

bool Time::equals(const Time &other_Time)
{
	if (hour == other_Time.hour
		&& minute == other_Time.minute
		&& second == other_Time.second)
		return true;
	else
		return false;
}