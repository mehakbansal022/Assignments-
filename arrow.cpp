#include<iostream>
using namespace std;
int main()
{
int i,j,rows,n;
cout<<"Enter rows: "<<endl;
cin>>rows;
cout<<"Enter number: "<<endl;
cin>>n;
for(i=1;i<=rows;i++)
{
for(j=rows;j>i;j--)
{
cout<<" ";
}
cout<<"*";
for(j=1;j<=2*(i-1);j++)
{
cout<<"*";
}
cout<<endl;
}
for(i=1;i<n;i++)
{
for(j=1;j<rows;j++)
{
cout<<" ";
}
cout<<"*"<<endl;
}
return 0;
} 
