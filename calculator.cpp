#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  float x,y;
  int choice=0;
  cout<<"****CALCULATOR****"<<"\n";
  cout<<"1.Addition"<<"\n";
  cout<<"2.Substraction"<<"\n";
  cout<<"3.Multiplication"<<"\n";
  cout<<"4.Division"<<"\n";
  cout<<"Enter operation "<<"\n";
  cin>>choice;
  cout<<"Enter number:: ";
  cin>>x;
  cout<<"Enter number:: ";
  cin>>y;
  switch (choice)
  {
  case 1:
  cout<<"The addition of 2 no.s is "<<x+y;
  break;
  case 2:
  cout<<"The substraction of 2 no.s is "<<x-y;
  break;
  case 3:
  cout<<"The multiplication of 2 no. is "<<x*y;
  break;
  case 4:
  cout<<"The division of 2 no. is "<<x/y;
  break;
  }  
  return 0;
}
