// Member_functions definitions for class Media "implementation"
#include <iostream>
#include <string>
#include "Media.h"  // // include definition of class Media
#include "student.h"  // include definition of class Student
#include "Date.h"   // include definition of class Date
using namespace std;
///////////////////////////
int size1=0;
Student s[];Date d[];
Media::Media( )
	: name(" "),
	ISBN(" "),
	NoOfCopies(2),
	CopiesAvailable(2)
{
                       }

Media::Media(string n ,string c ,int a ,Student [],Date [])
	: name( n ),
	ISBN( c ),
	CopiesAvailable( a )
{
                        }

void Media::Borrow(void){
	int a,i;
	// You should check here if "CopiesAvailable" is not zero!
	
	Student student;
	student.AddStudent();
	size1++;
	for(i=0;i<size1;i++)
	s[i].Increament();
	if (CopiesAvailable!=0&&CopiesAvailable>-1){
	a=	CopiesAvailable-1;
	setCopiesAvailable(a);
	Borrower[1-CopiesAvailable]=student;}
	else 
		cout <<"u can't borrow any books"<<endl;
	
	}


void Media:: Return(){string fn;int i;

	cout<<"enter your first name"<<endl;
	cin>>fn;
	for ( i=0;i<size1;i++){
	if (s[i]==fn)
		s[i].setName('\0');
	    s[i].setID(0);
		s[i].setDeparName('\0');
		s[i]=s[i+1];

	}}
void  Media ::PrintInfo(void){int i;
	for(i=0;i<size1;i++){
		s[i].Print();
		d[i].printDate();}}









