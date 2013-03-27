
#include "student.h"
#include "date.h"
#include "media.h"

#include <iostream>
#include <string>


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
}

}


