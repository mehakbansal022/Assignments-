#include<iostream>
using namespace std;
class Rectangle
{
private:
float length;
float width;
public:
Rectangle(float l=1.0,float w=1.0)
{
this->length=l;
this->width=w;
}
void setlength(float l)
{
if(l>0.0 &&l<20.0)
{
length=l;
}
else
{
length=1.0;
}
}
float getlength()
{
return length;
}
void setwidth(float w)
{
if(w>0.0 && w<20.0)
{
width=w;
}
else
{
width=1.0;
}
}
float getwidth()
{
return width;
}
float perimeter()
{
return 2*(length+width);
}
float area()
{
return length*width;
}
};
int main()
{
Rectangle a(5.2,2.5);
Rectangle b(7.0,4.6);
Rectangle c;
cout<<"length=  "<<a.getlength()<<"\nwidth= "<<a.getwidth()<<"\nperimeter of rect= "<<a.perimeter()<<"\narea of rect= "<<a.area()<<endl;
cout<<"\nlength=  "<<b.getlength()<<"\nwidth= "<<b.getwidth()<<"\nperimeter of rect= "<<b.perimeter()<<"\narea of rect= "<<b.area()<<endl;
cout<<"\nlength=  "<<c.getlength()<<"\nwidth= "<<c.getwidth()<<"\nperimeter of rect= "<<c.perimeter()<<"\narea of rect= "<<c.area()<<endl;
return 0;
}

