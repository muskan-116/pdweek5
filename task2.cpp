#include <iostream>
using namespace std;
int cm(int number1,int number2,int number3);
float km(int number1,int number2,int number3);
main()
{
int number1,number2,number3;
double volume,l1,w1;
cout<<"enter number1  : ";
cin>>number1;
cout<<"enter number2  : ";
cin>>number2;
cout<<"enter number3   ";
cin>>number3;
volume=0.3333334*(number1*number2*number3);

cout<<"volume of pyramid in metres  : "<<volume<<endl;

l1=cm( number1,number2,number3);
cout<<"volume of pyramid in centimeters  :"<<l1<<endl;

w1=km(number1,number2,number3);
cout<<"volume of pyramid in kilometres  :"<<w1<<endl;

}
int  cm(int number1,int number2,int number3)
{
int  n1=((number1*number2*number3)/3)*(100*100*100);
return n1;
}

float km(int number1,int number2,int number3)
{

float n3=((number1*number2*number3)/3);
float n4=1000*1000*1000;
float n5=n3/n4;
return n5;
}

