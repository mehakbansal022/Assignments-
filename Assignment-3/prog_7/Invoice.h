#include<iostream>
using namespace std;
class Invoice
{
private:
string pno;
string pdesp;
int item_qty;
int item_price;
public:
Invoice(string , string ,int ,int );
void setPno(string);
string getPno();
void setPdesp(string);
string getPdesp();
void setItem_qty(int);
int getItem_qty();
void setItem_price(int);
int getItem_price();
int getInvoiceAmount();
};
