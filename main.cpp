
#include "date.h"
#include "media.h"
#include "student.h"

#include <cstdlib>
#include <iostream>
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

