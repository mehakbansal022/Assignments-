#include<iostream>
using namespace std;
int recursiveMinimum(int a[],int s,int n)
{
int min;
if(s>=n-2)
{
if(a[s]<a[s+1])
return a[s];
else
return a[s+1];
}
min=recursiveMinimum(a,s+1,n);
if(a[s]<min)
return a[s];
else
return min;
}

int main() 
{
int n,i;
cout<<"Enter the size of array:";
cin>>n; int a[n],s=0;
cout<<"Enter array elements: ";
for(i=0;i<n;i++) 
{ 
cin>>a[i];
}

cout<<"The smallest number is: "<<recursiveMinimum(a,s,n)<<endl;
return 0;
}

