#include<iostream>
using namespace std;
class Quadrilateral
{
public:
float perimeter;
float area;
virtual void cal_peri()=0;
virtual void cal_area()=0;
virtual void show()=0;
};
class Trapezoid:public Quadrilateral
{
public:
Trapezoid(float a,float b,float c,float d,float h)
{
this->a=a;
this->b=b;
this->c=c;
this->d=d;
this->h=h;
}
void cal_peri()
{
perimeter=a+b+c+d;
}
void cal_area()
{
area=(1.0/2*(b+d)*h);
}
void show()
{
cout<<"\n\tPerimeter : "<<perimeter;
cout<<"\n\tArea : "<<area;
}
private:
float a,b,c,d,h;
};
class parallelogram:public Quadrilateral
{
public:
parallelogram(float w,float x,float y,float z,float h)
{
this->w=w;
this->x=x;
this->y=y;
this->z=z;
this->h=h;
}
void cal_peri()
{
perimeter=w+x+y+z;
}
void cal_area()
{
area=x*h;
}
void show()
{
cout<<"\n\tPerimeter : "<<perimeter;
cout<<"\n\tArea : "<<area;
}
private:
float w,x,y,z,h;
};
class Rectangle:public Quadrilateral
{
public:
Rectangle(float a,float b)
{
this->a=a;
this->b=b;
}
void cal_peri()
{
perimeter=(2*(a+b));
}
void cal_area()
{
area=a*b;
}
void show()
{
cout<<"\n\tPerimeter : "<<perimeter;
cout<<"\n\tArea : "<<area;
}
private:
float a,b;
};
class Square:public Quadrilateral
{
public:
Square(float n)
{
this->n=n;
}
void cal_peri()
{
perimeter=4*n;
}
void cal_area()
{
area=n*n;
}
void show()
{
cout<<"\n\tPerimeter : "<<perimeter;
cout<<"\n\tArea : "<<area;
}
private:
float n;
};
int main()
{
Quadrilateral *quad;
Trapezoid tr(13,18,14,12,11);
quad=&tr;
cout<<"\nTrapezoid : ";
quad->cal_peri();
quad->cal_area();
quad->show();

parallelogram pr(8,12,8,12,10);
quad=&pr;
cout<<"\nParallelogram : ";
quad->cal_peri();
quad->cal_area();
quad->show();

Rectangle rect(12,20);
quad=&rect;
cout<<"\nRectangle : ";
quad->cal_peri();
quad->cal_area();
quad->show();

Square sq(5);
quad=&sq;
cout<<"\nSquare : ";
quad->cal_peri();
quad->cal_area();
quad->show();

return 0;


}
