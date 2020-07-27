#include<iostream>
using namespace std;
int main()
{
int  n,temp,rev=0,d;
cout<<"Enter a number"<<endl;
cin>>n;
temp=n;
while(n!=0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(temp==rev)
cout<<temp<<"is a palindrome number"<<endl;
else
cout<<temp<<"is not a palindrome number"<<endl;
return 0;
}
