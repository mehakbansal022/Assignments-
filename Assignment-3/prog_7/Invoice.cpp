#include<iostream>
#include"Invoice.h"
using namespace std;
Invoice::Invoice(string number,string description,int qty,int price)
{
this->pno=number;
this->pdesp=description;
if(qty>0)
{
this->item_qty=qty;
}
else
{
this->item_qty=0;
}
if(price>0)
{
this->item_price=price;
}
else
{
this->item_price=0;
}
}
void Invoice::setPno(string number)
{
this->pno=number;
}
string Invoice::getPno()
{
return pno;
}
void Invoice::setPdesp(string description)
{
this->pdesp=description;
}
string Invoice::getPdesp()
{
return pdesp;
}
void Invoice::setItem_qty(int qty)
{
if(qty>0)
{
this->item_qty=qty;
}
else
{
this->item_qty=0;
}
}
int Invoice::getItem_qty()
{
return item_qty;
}
void Invoice::setItem_price(int price)
{
if(price>0)
{
this->item_price=price;
}
else
{
this->item_price=0;
}
}
int Invoice::getItem_price()
{
return item_price;
}
int Invoice::getInvoiceAmount()
{
return item_qty*item_price;
}

