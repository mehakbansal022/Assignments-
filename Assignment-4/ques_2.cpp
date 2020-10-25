#include<iostream>
using namespace std;
class Student
{
public:
Student(){
cout<<"Base class"<<endl;
}
};
class UndergraduateStudent:public Student
{
public:
UndergraduateStudent(){
cout<<"Undergraduate student is derived from student class"<<endl;
}
};
class GraduateStudent:public Student
{
public:
GraduateStudent(){
cout<<"Graduate student is derived from student class"<<endl;
}
};
class Freshman:public UndergraduateStudent
{
public:
Freshman(){
cout<<"Freshman is derived from Undergratuate student"<<endl;
}
};
class Junior:public UndergraduateStudent
{
public:
Junior(){
cout<<"Junior is derived from Undergratuate student"<<endl;
}
};
class Senior:public UndergraduateStudent
{
public:
Senior(){
cout<<"Senior is derived from Undergratuate student"<<endl;
}
};
class DoctoralStudent:public GraduateStudent
{
public:
DoctoralStudent(){
cout<<"Doctaral student is derived from Gratuate student"<<endl;
}
};
class MastersStudent:public GraduateStudent
{
public:
MastersStudent(){
cout<<"Master student is derived from Undergratuate student"<<endl;
}
};
int main()
{
//Student st;
//UndergraduateStudent ugs;
//GraduateStudent gs;
Freshman f;
Junior j;
Senior s;
DoctoralStudent dst;
MastersStudent mst;
}
