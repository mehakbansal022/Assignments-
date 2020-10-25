#include<iostream>
using namespace std;
class shape{
public:
shape()
{
cout<<"Base Shape "<<endl;
}
};
class TwoDshape:public shape
{
public:
float area;
virtual void calarea()=0;
virtual void print()=0;
};
class ThreeDshape:public shape
{
public:
float volume;
virtual void Calvolume()=0;
virtual void print()=0;
};
class Square:public TwoDshape
{
public:
Square(float s)
{
this->side=s;
}
 void calarea()
{
area=side*side;
}
 void print()
{
cout<<"\n\tSide : "<<side;
cout<<"\n\tArea of Square : "<<area;
}
private:
float side;
};
class Rectangle:public TwoDshape
{
float length,breadth;
public:
Rectangle(float l,float b)
{
this->length=l;
this->breadth=b;
}
 void calarea()
{
area=length * breadth;
}
 void print()
{
cout<<"\n\tlength : "<<length;
cout<<"\n\tbreadth : "<<breadth;
cout<<"\n\tArea of Rectangle : "<<area;
}
};
class Circle:public TwoDshape
{
float radius;
public:
Circle(float r)
{
this->radius=r;
}
 void calarea()
{
area=3.14*radius*radius;
}
 void print()
{
cout<<"\n\tRadius : "<<radius;
cout<<"\n\tArea of circle  : "<<area;
}
};
class Cube:public ThreeDshape
{
float s; 
public:
Cube(float a)
{
this->s=a;
}
 void Calvolume()
{
volume=s*s*s;
}
 void print()
{
cout<<"\n\tside : "<<s;
cout<<"\n\tVolume of cube : "<<volume;
}
};
class Cuboid:public ThreeDshape
{
float length,breadth,height;
public:
Cuboid(float l,float b,float h)
{
this->length=l;
this->breadth=b;
this->height=h;
}
 void Calvolume()
{
volume=length*breadth*height;
}
 void print()
{
cout<<"\n\tLength : "<<length;
cout<<"\n\tBreadth : "<<breadth;
cout<<"\n\theight : "<<height;
cout<<"\n\tVolume of Cuboid : "<<volume;
}
};
class Sphere:public ThreeDshape
{
float rad;
public:
Sphere(float r)
{
this->rad=r;
}
 void Calvolume()
{
volume=(1.33)*3.14*rad*rad;
}
 void print()
{
cout<<"\n\tradius : "<<rad;
cout<<"\n\tVolume of Sphere : "<<volume;
}
};
int main()
{
shape sh;
TwoDshape *twoD;
Square sq(4.5);
twoD=&sq;
cout<<"\nSquare : ";
twoD->calarea();
twoD->print();

Rectangle r1(3.2,5.7);
twoD=&r1;
cout<<"\nRectangle : ";
twoD->calarea();
twoD->print();

Circle c1(2.0);
twoD=&c1;
cout<<"\nCircle : ";
twoD->calarea();
twoD->print();

ThreeDshape *threeD;
Cube cb1(3.0);
threeD=&cb1;
cout<<"\nCube : ";
threeD->Calvolume();
threeD->print();

Cuboid cd1(1.2,2.3,3.4);
threeD=&cd1;
cout<<"\nCuboid : ";
threeD->Calvolume();
threeD->print();

Sphere s1(9);
threeD=&s1;
cout<<"\nSphere : ";
threeD->Calvolume();
threeD->print();
return 0;
}
