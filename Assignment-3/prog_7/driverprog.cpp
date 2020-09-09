#include<iostream>
#include"Invoice.h"
using namespace std;

int main()
{
Invoice in1("ed34","screw gauge",2,80);
Invoice in2("ed737","nailers",-6,55);
cout<<"Invoice 1 part number is:"<<in1.getPno()<<endl<<"Invoice 1 part description:"<<in1.getPdesp()<<endl<<"Invoice 1 quantity:"<<in1.getItem_qty()<<endl<<"Invoice 1 price per iten is:"<<in1.getItem_price()<<endl<<"total amount is:"<<in1.getInvoiceAmount()<<endl<<endl; 
cout<<"\nInvoice 2 part number is:"<<in2.getPno()<<"\nInvoice 2 part description:"<<in2.getPdesp()<<"\nInvoice 2 quantity:"<<in2.getItem_qty()<<"\nInvoice 2 price per iten is:"<<in2.getItem_price()<<"\ntotal amount is:"<<in2.getInvoiceAmount()<<endl;
}

