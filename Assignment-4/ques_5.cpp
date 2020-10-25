#include<iostream>
using namespace std;
class person
{
public:
person(int value)
{
cout<<"Person called  "<<value<<endl;
}
person()
{
cout<<"Default  constructor "<<endl;
}
~person()
{
cout<<"Destructor Person called  "<<endl;
}
};
class Doctors:virtual public person
{
public:
Doctors(int value):person(value)
{
cout<<"Doctor called  "<<value<<endl;
}
~Doctors()
{
cout<<"Desctructor Doctor called  "<<endl;
}
};
class Engineers:virtual public person
{
public:
Engineers(int value):person(value)
{
cout<<"Engineer called  "<<value<<endl;
}
~Engineers()
{
cout<<"Destructor Engineer called  "<<endl;
}
};
class teachers:public Doctors,public Engineers
{
public:
teachers(int value):Doctors(value),Engineers(value),person(value)
{
cout<<"teachers called  "<<value<<endl;
}
~teachers()
{
cout<<"Destructor teachers called  "<<endl;
}
};


int main()
{
teachers t(6);
}
