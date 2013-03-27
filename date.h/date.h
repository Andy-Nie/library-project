
#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;


// Data class definition
class Date
{
public:
	static const int monthsPerYear = 12;
	Date(int=1 , int= 1 , int = 1990); //default constructor

	// set functions
	void setDate( int, int, int ); //set Day, Month, Year 
	void setDay(int); //set Day (after validation)
	void setMonth(int); //set Month (after validation)
	void setYear(int); //set Year (after validation)

	// get functions
	int getDay(); //return Day
	int getMonth(); //return Moth
	int getYear(); //return Year

	void printDate();// output Date Information

private:
	int day; // 1-31 based on month
	int month; // 1-12
	int year; // any year
	int checkDay( int ) const ;// utility function to check if day is proper for month & year

};//end class Date

#endif
