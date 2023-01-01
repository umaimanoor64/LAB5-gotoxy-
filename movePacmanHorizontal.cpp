#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
main()

{
system("cls");
cout<<" ############################################"<<endl;
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl; 
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl;
cout<<" #                                          #"<<endl;
cout<<" ############################################"<<endl;
int x= 10, y=5;
while(true)
{
if(x==20)
{
x=2;
}
gotoxy(x,y);
cout<<"  ";
x++;
if(x<20)
{
gotoxy(x,y);
cout<<"p";
}
Sleep(100);
}
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
