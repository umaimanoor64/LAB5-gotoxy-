#include<iostream>
using namespace std;
main()
{
int holidays,sum,difference,workingDays,time,minutes,final;
cout<<" enter holidays = ";
cin>>holidays;
workingDays=365-holidays;
sum=(workingDays*63)+(holidays*127);
difference=30000-sum;
time=difference/60;
minutes=time*60;
final=difference-minutes;
cout<<"tom sleeps well"<<endl;
cout<<"the remaining time to play in minutes is = "<<difference<<endl;
cout<<"time in hours is="<<time<<"hours"<<final<<"minutes";
}

