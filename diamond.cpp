#include<iostream>
using namespace std;
int main()
{
int i,j,rows;
cout<<"Enter no. of rows : "<<endl;
cin>>rows;
for(i=1;i<=rows;i++)
{
for(j=rows;j>i;j--)
{
cout<<" ";
}
cout<<"*";
for(j=1;j<2*(i-1);j++)
{
cout<<" ";
}
if(i==1)
{
cout<<endl;
}
else
{
cout<<"*"<<endl;
}
}
for(i=rows-1;i>=1;i--)
{
for(j=rows;j>i;j--)
{
cout<<" ";
}
cout<<"*";
for(j=1;j<2*(i-1);j++)
{
cout<<" ";
}
if(i==1)
{
cout<<endl;
}
else
{
cout<<"*"<<endl;
}
}
return 0;
}
