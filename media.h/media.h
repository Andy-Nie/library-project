// student Media "Interface"
#ifndef MEDIA_H
#define MEDIA_H

#include <string>
#include "Student.h" //include Student class definition
#include "Date.h" //include Data class definition

// Media class definition
class Media
{
public:
	Media(void); // defualt constructor
	Media(string, string); // constructor with parameter
	void Borrow(Student &, Date & ); 
	void Return(Student &s);
	void PrintInfo(void);// displays all information

private:// datamembers
	string name;
	string ISBN;
	const int NoOfCopies;
	int CopiesAvailable;
	Student Borrower[2];
	Date BorrowDate[2];

};//end class Media

#endif
