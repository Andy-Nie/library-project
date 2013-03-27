#ifndef DATE_H
#define DATE_H
using namespace std;
class date{
  int day;
	int month;
	int year;
public:
	date(int=1 , int= 1 , int = 1990);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay();
	int getMonth();
	int getYear();
	void dat();
	void printDate();
};//end class Date

#endif
