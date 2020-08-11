#include<iostream>
using namespace std;
class Account
{
private:
int account_balance;
public:
Account(int );
void credit(int );
void Debit(int );
int getbalance();
};
Account::Account( int balance)
{
if(balance>=0)
{
account_balance=balance;
}
else
{
account_balance=0;
cout<<"Initial Balance was Invalid"<<endl;
}
}
void Account::credit(int balance)
{
account_balance=account_balance+balance;
}
void Account::Debit( int balance)
{
if(account_balance>=balance)
{
account_balance=account_balance-balance;
}
else
{
cout<<"Debit amount exceeded account balance."<<endl;
}
}
int Account::getbalance()
{
return account_balance;
}
int main()
{
Account Acc1(80);
Account Acc2(66);
cout<<"1st account initial balance is: "<<Acc1.getbalance()<<"\n2nd account initial balance is: "<<Acc2.getbalance()<<endl;
Acc1.credit(150);
Acc2.credit(54);
cout<<"\n1st account balance is: "<<Acc1.getbalance()<<"\n2nd account balance is: "<<Acc2.getbalance()<<endl;
Acc1.Debit(60);
Acc2.Debit(30);
cout<<"\n1st account balance is: "<<Acc1.getbalance()<<"\n2nd account balance is: "<<Acc2.getbalance()<<endl;
return 0;
}



