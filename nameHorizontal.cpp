#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
gotoxy(20,5);
cout<<"           ######    #      #######     ";
gotoxy(20,6);
cout<<"           #    #    #         #        ";
gotoxy(20,7);
cout<<"           ######    #         #        ";
gotoxy(20,8);
cout<<"           #    #    #         #        ";
gotoxy(20,8);
cout<<"           #    #    #####  #######    ";
}
