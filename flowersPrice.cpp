#include<iostream>
using namespace std;
main()
{
int redRoses,whiteRoses,tulips,redRosesPrice,whiteRosesPrice,tulipsPrice;
cout<<"How many  red roses = ";
cin>>redRoses;
cout<<"How many white roses = ";
cin>>whiteRoses;
cout<<"how many tulips = ";
cin>>tulips;
redRosesPrice=redRoses*2;
whiteRosesPrice=whiteRoses*4.10;
tulipsPrice=tulips*2.50;
cout<<" price of total red roses is = "<<redRosesPrice<<endl;
cout<<"price of all white roses is = "<<whiteRosesPrice<<endl;
cout<<"price of all tulips = "<<tulipsPrice<<endl;

if(redRosesPrice>200)
{
int discount1;
discount1=redRosesPrice-(redRosesPrice*0.2);
cout<<"Price of red roses after discount is = "<<discount1<<endl;
}
if(whiteRosesPrice>200)
{
int discount2;
discount2=whiteRosesPrice-(whiteRosesPrice*0.2);
cout<<"price of white roses after discount = "<<discount2<<endl;
}
if(tulipsPrice>200)
{
int discount3;
discount3=tulipsPrice-(tulipsPrice*0.2);
cout<<"the price of tulips after discount is = "<<discount3<<endl;
}
}