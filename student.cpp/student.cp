// Member_functions definitions for class Student "implementation"
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include "student.h"  // include definition of class Student
using namespace std;



Student::Student( int i, string nam, string dep )
{
	setID( i );
	setName( nam );
	setDeparName( dep );
	NoOfBorrowedBooks=0;
}// end Student constructor


void Student::setID( int i )
{
	if(ID==0)
		while(ID=0)
			ID = rand() % 100;
			
}

void Student::setName( string wordN )
{
	name = wordN;

}

void Student::setDeparName( string wordD )
{
	departname = wordD;
}

int Student::getID( )
{
	return ID;
}

string Student::getName( )
{
	return name;
}

string Student::getDeparName( )
{
	return departname;
}

// start ADD fuction
void Student::AddStudent(  ) 
{
	string wordN, wordD;

	cout<<"Two books allowed to each student \n\n";
	cout<<"Enter the student's name : \n";
	getline( cin, wordN );
	setName( wordN );
	cout<<"Enter the Department name : \n";
	getline( cin, wordD );
	setDeparName( wordD );

}// end ADD function

// start Increment fuction
void Student::Increment( )
{
	NoOfBorrowedBooks++;
}// end  Increment fuction

// start Decrement function
void Student::Decrement( )
{ 
	NoOfBorrowedBooks--;
}// end Decrement function

// start Print fuction
void Student::Print( )
{
	cout<<"\n******** STUDENT INFO ********\n\n";
	cout<<" ID         : "<<"\t"<<getID()<<endl;
	cout<<" Name       : "<<"\t"<<getName()<<endl;
	cout<<" Department : "<<"\t"<<getDeparName()<<endl;
	cout<<"\n****************************\n"<<endl;

}// end print function


