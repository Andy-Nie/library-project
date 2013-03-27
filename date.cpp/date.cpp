// Member_functions definitions for class Date "implementation"
#include <iostream>
#include <iomanip>
#include "Date.h" // include definition of class Date
using namespace std;

// costructor function to initialize private data: calls member function
// setDate to set variables
Date::Date(int da, int mon, int ye )
{
	setDate( da, mon, ye );
}// end Date constructor

void Date::setDate( int d, int m, int y )
{
	setDay( d );// set private field day
	setMonth( m );// set private field month
	setYear( y );// set private field year
}// end function setDate

void Date::setDay( int d )
{
	day = ( d < 1 && d <= 32 ) ? 1 : checkDay( d );
}// end function setDay

void Date::setMonth( int m )
{
	month = ( m > 0 && m <= monthsPerYear ) ? m : 1;
}// end function setMonth

void Date::setYear( int y )
{
	year=y;
}// end function setYear

int Date::getDay()
{
	return day; // return day value
}// end function getDay

int Date::getMonth()
{
	return month; // return month value
}// end function getMonth

int Date::getYear()
{
	return year; // return year value
}// end function getYear

// confirming proper day value based on month, year and handles leap years, too
int Date::checkDay( int testday ) const
{
	static const int daysPerMonth[ monthsPerYear+1 ] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	// determine whether testday is valid for specified moth
	if ( testday > 0 && testday <= daysPerMonth[ month ] )
		return testday;

	// february 29 check for leap year
	if ( month == 2 && testday == 29 && ( year % 400 == 0 || ( year % 4 == 0 && year % 100 !=0 )))
		return testday;
}// end function checkDay

// print Date ( dd/mm/yy ) format
void Date::printDate()
{
	cout<<setfill('0')<<setw(2)<<getDay()<<"/"<<setw(2)<<getMonth()<<"/"<<setw(4)<<getYear();
}// end function printDate






