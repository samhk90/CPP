//Avg, of numbers2
#include<iostream>
int main()
{
    float num1,num2,sum,avg;
    std::cout<<"Enter  two number";
    std::cin>>num1;
    std::cin>>num2;
    sum= num1+num2;
    avg=sum/2;
    std::cout<<"SUM of 2 no.= "<<sum<<"\n";
    std::cout<<"Avg of 2 no.= "<<avg;
    return 0;
}
