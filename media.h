#ifndef MEDIA_H
#define MEDIA_H
#include <string>
#include "student.h"
#include "date.h"
class media
{
private:
  string name;
	string ISBN;
	 int NoOfCopies;
	int CopiesAvailable;
	student Borrower[2];
	date BorrowDate[2];
public:
	
	media(string="",string="",int=0,int=2);
	void setno(int);
	void setbookname();
	void setisbn();
	void setCopiesAvailable();
	int getno();
	void getCopiesAvailable();
	string getbookname();
	string getisbn();
	void Borrow(void); // fills the student entry, and BorrowDate
	//// updates NoOfCopies and increases student datamember 'NoOfBorrowedBooks'
// only 2 copies of a certain book are allowed to be borrowed
	void Return(void);
 // empties the student entry, then shift student array to compact it
 // and the same for BorrowDate
//updates NoOfCopies and decreases student datamember 'NoOfBorrowedBooks'
	
	void PrintInfo(void);
// displays all object information and must contain of students who borrowed it with dates

};
#endif;
