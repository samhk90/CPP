//Define two functions to print the maximum and the minimum number respectively among three numbers entered by user.
#include<iostream>
#include<conio.h>
using namespace std;
int max(int a,int b,int c)
{
    if (a>b and a>c)
    {
        cout<<"first no. is greater "<<a;
        }
    if (b>c and b>a)
    {
        cout<<"second no. is greater "<<b;
        }
    if(c>a and c>b)
    {
        cout<<"third no. is greter "<<c;
        }
    return 0;

}
int min(int a,int b,int c)
{
    if (a<b and a<c)
    {
        cout<<"first no. is smaller "<<a;
        }
    if (b<c and b<a)
    {
        cout<<"second no. is smaller "<<b;
        }
    if(c<a and c<b)
    {
        cout<<"third no. is smaller "<<c;
        }
    return 0;

}
int main()
{
    int a,b,c;
    cout<<"Enter your first no. ";
    cin>>a;
    cout<<"Enter your second no. ";
    cin>>b;
    cout<<"Enter your third no. ";
    cin>>c;
    max(a,b,c);
    cout<<"\n";
    min(a,b,c);
    return 0;
    getch();
}
