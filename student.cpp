#include<iostream>
#include <string>
#include"student.h"
#include<cstdlib>
using namespace std;
/////////////////////////////////////////
 int size1=43200555;//size1  for ID

student::student  (string n, string de ,int id,int num){setname(n);setdep(de);ID=id;setNoOfBorrowedBooks(num);}

void student::setname(string n){name=n;  }

void student::setdep(string d){deparname=d;}

void student::setNoOfBorrowedBooks(int a){NoOfBorrowedBooks-=a;}

string student::getname(){return name;}

string student::getdep(){return deparname; }

int student:: getid(){if (ID==0)
{const int i=size1++;
return i;}}

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
	





