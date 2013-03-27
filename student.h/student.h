// student class "Interface"
// create Student Class definition
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student // Data class definition
{

public:
	Student( int = 0, string =" ", string =" " ); // defualt constructor

	// set functions prototypes
	void setID( int );
	void setName( string );
	void setDeparName( string );

	// get functions prototypes
	int getID();
	string getName();
	string getDeparName();

	void AddStudent( );// function to add new student 
	void Increament( );
	void Print( );// function to display the details of the students

private:
	int ID;
	string name;
	string departname;
	int NoOfBorrowedBooks;

}; //end class Student
#endif 


