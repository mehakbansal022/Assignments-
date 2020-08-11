#include<iostream>
using namespace std;
class Date
{
private:
int month;
int day;
int year;
public:
Date(int m,int d,int y)
{
if(m>=1 && m<=12)
{
month=m;
}
else
{
month=1;
}
day=d;
year=y;
}
void  setmonth(int m)
{
if(m>=1 && m<=12)
{
month=m;
}
else
month=1;
}
int getmonth()
{
return month;
}
void setday(int d)
{
day=d;
}
int getday()
{
return day;
}
void setyear(int y)
{
year=y;
}
int getyear()
{
return year;
}
void displayDate()
{
cout<<month<<"/"<<day<<"/"<<year<<endl;
}
};
int main()
{
Date date1(18,6,2001);
cout<<"Date is: ";
date1.displayDate();
date1.setmonth(8);
date1.setyear(2020);
date1.displayDate();
return 0;
}

