#include<iostream>
#include<conio.h>
int main()
{
int avg,sum=0;
int i;
int marks[10];
for(i=0;i<=10;i++)
{
    std::cout<<"Enter your marks";
    std::cin>>marks[i];
}
for(i=0;i<=10;i++)
{
    sum=sum+marks[i];
    std::cout<<"sum is "<<sum;
}
avg=sum/10;
std::cout<<"avg marks of 10 students is "<<avg;
return 0;
}