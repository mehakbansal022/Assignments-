#include<iostream>
using namespace std;
int main()
{
int rows,col,i,j;
cout<<"Enter rows you need: "<<endl;
cin>>rows;
cout<<"Enter columns you want: "<<endl;
cin>>col;
for(i=1;i<=rows;i++)
{
for(j=1;j<=col;j++)
{
if(i==1 || i==rows || j==1 || j==col)
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

