#include<iostream>
int main()
{
    int choice;
    float c,k;
    std::cout<<"Enter youur choice ";
    std::cin>>choice;
    switch (choice)
    {
    case 1:
    std::cout<<"Enter Temp. ";
    std::cin>>c;
    k=273+c;
    std::cout<<"Temp. in kalvin is "<<k;
    break;
    case 2:
    std::cout<<"Enter Temp.";
    std::cin>>k;
    c=k-273;
    std::cout<<"Temp. in celsius is "<<c;
    break;
    }
}