#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[50];
	cout<<"Enter the string"<<endl;
	gets(str);
	int i,flag=0;
	int n=strlen(str);
	for(i=0;i<n;i++)
	{
	if(str[i]!=str[n-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"string is not  palindrome"<<endl;
	else
	cout<<"string is palindrome"<<endl;
	return 0;
}
