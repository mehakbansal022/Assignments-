#include<iostream>
using namespace std;
int main()
{
int num,i,j,temp;
cout<<"Enter the limit of number you want"<<endl;
cin>>num;
int arr[num];
for(i=0;i<num;i++)
{
cin>>arr[i];
}
for(i=0;i<num;i++)
{
for(j=i+1;j<num;j++)
{
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
cout<<"the sorted array is : "<<endl;
for(i=0;i<num;i++)
{
cout<<arr[i]<<"\t"<<endl;
}
cout<<"The 2nd maximum no. is= "<<arr[1]<<endl;
cout<<"The 2nd minimum no. is= "<<arr[num-2]<<endl;
return 0;
}

