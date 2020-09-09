#include<iostream>
#include<iomanip>
using namespace std;
float calculatecharge(float hours)
{
if(hours<3)
return 2.00;
else
{
if(hours<24)
return 2.00+(hours-3)*0.5;
else 
return 10.00;
}
}
int main()
{
float one ,two , three;
cout<<"Enter hours for three customers: ";
cin>>one>>two>>three;
cout<<"CAR"<<"\t"<<"HOURS"<<"\t"<<"COST"<<"\t"<<endl;
cout<<"1"<<"\t"<<fixed<<setprecision(1)<<one<<setprecision(2)<<"\t"<<calculatecharge(one)<<endl;
cout<<"2"<<"\t"<<fixed<<setprecision(1)<<two<<setprecision(2)<<"\t"<<calculatecharge(two)<<endl;
cout<<"3"<<"\t"<<fixed<<setprecision(1)<<three<<setprecision(2)<<"\t"<<calculatecharge(three)<<endl;
cout<<"TOTAL\t"<<fixed<<setprecision(1)<<one+two+three<<"\t"<<setprecision(2)<<calculatecharge(one)+calculatecharge(two)+calculatecharge(three);
return 0;
}
