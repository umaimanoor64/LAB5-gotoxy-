#include<iostream>
#include<windows.h>
using namespace std;
void headeruams();
void aggregate(string name, float matricMarks, float interMarks, float ecatMarks );
void compare(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2 );
main()
{
system("cls");
string name;
float matric ;
float inter;
float ecat;
string nameStd1;
string nameStd2;
float ecatMarksStd1;
float ecatMarksStd2;
headeruams();
cout<<"enter  name= ";
cin>>name;
cout<< "enter  matric marks= ";
cin>>matric;
cout<<"enter inter marks= ";
cin>>inter;
cout<<"enter ecat marks= ";
cin>>ecat;
cout<<"enter first student name= ";
cin>>nameStd1;
cout<<"enter ecat marks of first student= ";
cin>>ecatMarksStd1;
cout<<"enter second student name= ";
cin>>nameStd2;
cout<<"enter ecat marks of second student= ";
cin>>ecatMarksStd2;
aggregate(name, matric, inter, ecat);
compare(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
}
void headeruams()
{
cout<<"  ############################################################### "<<endl;
cout<<"  #                                                             # "<<endl;
cout<<"  #                                                             # "<<endl;
cout<<"  #            UNIVERSITY ADMISSION MANAGEMENT                  # "<<endl;
cout<<"  #                                                             # "<<endl;
cout<<"  #                       SYSTEM                                # "<<endl;
cout<<"  #                                                             # "<<endl;
cout<<"  #                                                             # "<<endl;
cout<<"  ############################################################### "<<endl;
}

void aggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
float matricResult,interResult,ecatResult,aggregate;
matricResult=matricMarks/(1100*100*0.30);
interResult=interMarks/(550*100*0.30);
ecatResult=ecatMarks/(400*100*0.40);
aggregate=matricResult+interResult+ecatResult;
cout<<"aggregate is= "<<aggregate<<endl;
}
void compare(string nameStd1, float ecatMarksStd1, string nameStd2, float ecatMarksStd2 )
{
if(ecatMarksStd1-ecatMarksStd2>0)
{
cout<< " roll no of student 1 is 1" <<endl;
}
if(ecatMarksStd1-ecatMarksStd2<0)
{
cout<<"  roln no of student 2 is 1"<<endl;
}
}
