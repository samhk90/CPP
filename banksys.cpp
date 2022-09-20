#include<iostream>
#include<conio.h>
using namespace std;
class bank
{
private:
int depo,wid;
public:
int bal=20000;
void deposite()
{
    cout<<"Enter deposite amount:: ";
    cin>>depo;
    bal=bal+depo;
    cout<<"Avaiable Balance:: "<<bal;
}
void widraw()
{
    cout<<"Enter widraw amount:: ";
    cin>>wid;
    bal=bal-wid;
    cout<<"Avaiable Balance:: "<<bal;
}
void currentbal()
{
    cout<<"current balance:: "<<bal;
}
};
int main()
{
    bank sami;
    int ac,pin,choice;
    cout<<"***Wlecom to Arre Bank***";
    cout<<"\nEnter your A/C no.:: ";
    cin>>ac;
    cout<<"Enter your PIN:: ";
    cin>>pin;
    if (ac==123 and pin==9022)
    {
        cout<<"1.Balance";
        cout<<"\n2.Deposite";
        cout<<"\n3.widraw";
        cout<<"\n4.check for balance";
        cout<<"\nEnter your choice:: ";
        cin>>choice;
        switch (choice)
        {
        case 1 :
        cout<<"Avaiable balance:: "<<sami.bal;
        break;
        case 2:
        sami.deposite();
        break;
        case 3:
        sami.widraw();
        break;
        case 4:
        cout<<"Avaiable balance:: "<<sami.bal;
        break;
        }
    }
    else
    {
    cout<<"Wrong Password";
    }
    return 0;
    getch();
}