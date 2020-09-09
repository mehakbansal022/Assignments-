#include<iostream>
using namespace std;
int main()
{
int side1,side2,hypo;
for(side1=1;side1<500;side1++)
{
for(side2=side1+1;side2<500;side2++)
{
for(hypo=side2+1;hypo<500;hypo++)
{
if((side1*side1)+(side2*side2)==(hypo*hypo))//&(side1!=side2))
{
cout<<side1<<" "<<side2<<" "<<hypo<<endl;
}
}
}
}
return 0;
}
