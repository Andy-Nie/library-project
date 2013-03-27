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
	Media();
	Media(string,string,int,Student[],Date[]);
	void Borrow(void); 
	void Return(void);
	void PrintInfo(void);// displays all information

private:
	string name;
	string ISBN;
	const int NoOfCopies;
	int CopiesAvailable;
	Student Borrower[2];
	Date BorrowDate[2];
	void setCopiesAvailable(int );
};//end class Media

#endif
