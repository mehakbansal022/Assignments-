#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int i,j,r=5,x=5,y=5,a;
for(i=0;i<15;i++)
{
for(j=0;j<16;j++)
{
a=sqrt(((i-x)*(i-x)+(j-y)*(j-y)));
if(r==a)
{
cout<<"*";
}
else
{
cout<<" ";
}
}
cout<<endl;
}
return 0;
}
