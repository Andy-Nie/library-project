library-project
===============
#include"student.h"
#include"date.h"
#include"media.h"
#include<iostream>
#include <string>
using namespace std;
int size=0;
int main(){int n,num=0;
cout<<"the maximum books allowed for sutdent to issue is 2"<<endl;
system ("color A");
student nm[100],b[100] ;media m[100];date d[100];
  cout <<"enter your choise '\n' 1- add new book'\n' 2 view all book details\n3- search a book \n 4-add new student \n 5- display all student details\n 6- view astudent \n 7.RETURN BOOK \n 9-  exit"<<endl;
	cin>>n;
	while (n!=0){
	if (n<=9&&n>0){
		switch (n)
		{
		case 4:{int num,i;
			cout<<"how many  student do u want to add"<<endl;
			cin>>num;
			for(i=0; i<num;i++){
				nm[i].add();
				m[i].setbookname();
				m[i].setisbn();
			d[i].dat();

			m[i].setCopiesAvailable();}
			size+=num;}
			
	break;
		case 5:{

	for (int i=0;i<size;i++){
					m[i].PrintInfo();}}
			   break;
		case 7:
			{
			for (int i=0;i<2;i++)
				m[i].Return();	
			}
			break;
		case 8:
			{
			}
	break;
		case 9:
			exit (0);
			   }}else {cout<<"wrong num"<<endl;}
	
	cout <<"enter your choise '\n' 1- add new book'\n' 2 view all book details\n3- search a book \n 4-add new student \n 5- display all student details\n 6- view astudent  \n  7.RETURN BOOK \n 9-  exit"<<endl;
	cin>>n;}
	system ("pause");
	return 0;
}

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
#include<iostream>
#include <string>
#include"student.h"
#include<cstdlib>
using namespace std;
 int size1=43200555;//size1  for ID
student::student  (string n, string de ,int id,int num){setname(n);setdep(de);ID=id;setNoOfBorrowedBooks(num);}
void student::setname(string n){name=n;  }
void student::setdep(string d){deparname=d;}
void student::setNoOfBorrowedBooks(int a){NoOfBorrowedBooks-=a;}
string student::getname(){return name;}
string student::getdep(){return deparname; }
int student:: getid(){if (ID==0) {const int i=size1++;return i;}}
void student::add(){
	string na,dep;int no=0;
	cout<<"enter name"<<endl;
			cin>>na;
			setname(na);
			cout<<"enterDepartment"<<endl;
			cin>>dep;
			setdep(dep);
NoOfBorrowedBooks++;
}
void student ::display(){

	cout<<"name\t department\t ID"<<endl;
	
		cout<<getname()<<'\t'<<'\t'<<getdep()<<'\t'<<getid()<<endl;}
	

#ifndef MEDIA_H
#define MEDIA_H
#include <string>
#include "Student.h"
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
#include<iostream>
#include <string>
#include "Student.h"
#include "date.h"
#include"media.h"
using namespace std;
//////////////////////////////////////
int siz=0;student s[];date d[];
media::media(string a,string b,int v,int z)
{NoOfCopies=v;
 name=a;
ISBN=b;
CopiesAvailable=z;
}
void media::setno(int n){NoOfCopies=n; }  
void media::setCopiesAvailable(){int a;
  cout <<"HOW many books do u want to take"<<endl;
	cin>>a;
	if (a>0&&a<=2){
	CopiesAvailable-=a;
	setno(a);
	getCopiesAvailable();
	}
	else {
		cout<<"u can't bowrow mor thant 2 books reinput the number "<<endl;
		cin>>a;}
}
int media::getno(){return NoOfCopies;}
void media::getCopiesAvailable(){
	cout<<"the total book u can bowrow now is";
	cout<< CopiesAvailable<<endl;
if ( CopiesAvailable==0)
cout<<"u can't bowrrow any book"<<endl;}

void media::setbookname(){string a;
	cout <<"enter the book name"<<endl;
cin>>a;
name=a;}
void media::setisbn(){string a;
	cout <<"enter the ISBN"<<endl;
cin>>a;
ISBN=a;
siz++;
}
string  media::getbookname(){return name;}
string  media::getisbn(){return ISBN;}
void media:: Borrow(void){
	int i;
	
	for (i=0;i<2;i++){
		
BorrowDate[i].setDay(i);
BorrowDate[i].setMonth(i);
BorrowDate[i].setYear(i);	}

}

	void media:: Return(void){
		string emp;int j;
		cout<<"enter ur  first name"<<endl;
			cin>>emp;
		cout<<"how many book do u want to return"<<endl;
		cin>>j;
    for(int i=0;i<siz;i++)
        {
            if (Borrower[i].name==emp)
                    
               // set the value of the last entries of all the arrays to null
                   Borrower[i]. setname('\0');//last first name
                   Borrower[i].setdep('\0');
				   BorrowDate[i].setDay('\0');
				   BorrowDate[i].setMonth('\0');
				   BorrowDate[i].setYear('\0');
				   Borrower[i]= Borrower[i+1];}
				student s;
				s.setNoOfBorrowedBooks(j);}
	
	void media:: PrintInfo(void){student s[100];
	for(int i=0;i<siz;i++){
		s[i].display();
		cout<<"you take "<<getno()<<" books"<<endl;
		d[i].printDate();

	}}


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

#include<iostream>
#include "date.h"
using namespace std;
date::date(int d , int m , int y){
 day=d;
 month=m;
 year=y;}
void date::setDay(int a){day=a;}
void date::setMonth(int a){  month=a;}
void date::setYear(int a){year=a;}
int date:: getDay(){return day;}
int date:: getMonth(){return month;}
int date:: getYear(){return year;}
void date::dat(){int b,s,d;
	cout <<"enter day"<<endl;
	cin>>b;
	setDay(b);
	cout<<"enter month"<<endl;
	cin>>s;
	setMonth(s);
	cout<<"enter year"<<endl;
	cin>>d;
	setYear(d);}
void date:: printDate(){
	cout <<"u bowrow the book on "<<'\t'<<getDay()<<"/"<<getMonth()<<"/"<<getYear()<<endl;}

