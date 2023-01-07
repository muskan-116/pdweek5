#include <iostream>
using namespace std;
float taxcalculator(char type,float price);
main()
{
char vehiclecode;
float priceofvehicle,amountoftax,finalprice;
cout<<"enter vehicle price :";
cin>>priceofvehicle;
cout<<"enter vehicle  code :";
cin>>vehiclecode;
amountoftax=taxcalculator( vehiclecode, priceofvehicle);
finalprice=priceofvehicle+amountoftax;
cout<<"final price of vehicle "<<vehiclecode<<"  is"<<finalprice;
}

float taxcalculator(char type,float price)
{
float word;
if(type=='M');
{
word=(price*6)/100;
return word;
}
if(type=='M');
{
word=(price*6)/100;
return word;
}
if(type=='M');
{
word=(price*6)/100;
return word;
}
if(type=='E');
{
word=(price*8)/100;
return word;
}
if(type=='S');
{
word=(price*10)/100;
return word;
}
if(type=='V');
{
word=(price*12)/100;
return word;
}
if(type=='T');
{
word=(price*15)/100;
return word;
}
}
