#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printPacman();
main()

{
system("cls");
printMaze();
printPacman();
}

void printMaze()
{
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
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printPacman()
{
gotoxy(10,7);
cout<<"p";
Sleep(100);
}








