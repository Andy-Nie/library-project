#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include <string>
using namespace std;
class student{
private:
  string  deparname;
	int NoOfBorrowedBooks;
int ID ;
public:
	string name;
	student (string ="" ,string=" " ,int =0,int =0);//constructor with defult argument
	void setname(string);
	void setdep(string);
	void setNoOfBorrowedBooks(int);
	string getname();
	string getdep();
	int getid();
	void add();
	void display();
};
#endif
