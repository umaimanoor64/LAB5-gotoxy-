#include<iostream>
using namespace std;


int main()
{
string country;
int ticketPrice;

while(true)
{

cout<<"enter country name= ";
cin>>country;
cout<<"ticket price in dolors= ";
cin>>ticketPrice;
if(country=="pakistan")
{
int discount=ticketPrice-(ticketPrice*0.05);
cout<<"final price of ticket after discount= "<<discount;

}
if(country=="ireland")
{
int discount1=ticketPrice-(ticketPrice*0.1);
cout<<"the final ticket price after discount is="<<discount1;
}
if(country=="india")
{
int discount2;
discount2=ticketPrice-(ticketPrice*0.2);
cout<<"final ticket price after discount is = "<<discount2;
}
if(country=="england")
{
int discount3=ticketPrice-(ticketPrice*0.3);
cout<<"the final ticket price after discount is = "<<discount3;
}
if(country=="canada")
{
int discount4=ticketPrice-(ticketPrice*0.45);
cout<<"final ticket price after discount is = "<<discount4;
}
cout<<endl;
}
return 0;
}