#include <iostream>
using namespace std;
main()
{
float hours,days,Workers,indivdualHours,totalHours,display1,display2;
float workingHours=10;
cout<<" Enter the number of hours  :  ";
cin>>hours;
cout<<" Enter the number of days  :  ";
cin>>days;
cout<<" Enter the number of workers  :  ";
cin>>Workers;


indivdualHours=workingHours- (workingHours*0.1);
totalHours=indivdualHours*days*Workers;
display1=totalHours-hours;
display2=-display1;


if(totalHours>hours)
{
cout<<"Yes!!! "<<display1<< "hours left .";
}

if(totalHours<hours)
{
cout<<"Not Enough Time !! "<<display2<< "hours needed .";
}
}
