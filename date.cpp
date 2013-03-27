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
