#include<iostream>
#include<conio.h>
using namespace std;
class circle
{
private:
 float rad;
 float pi=3.14;
public:
 void getdata()
 {
    cout<<"Enter radius ";
    cin>>rad;
 }
 void displaydata()  
 {
    float raduis;
    raduis=rad;
    cout<<raduis;
 } 
 void areaofcircle()
 {
    float area;
    area=2*rad*rad;
    cout<<"The are of circle "<<area;
 }
 void circumferance()
 {
    float circum;
    circum=2*pi*rad;
    cout<<"THe circumfernace of circle is "<<circum;
 }
};
int main()
{
    circle r1;
    r1.getdata();
    r1.displaydata();
    r1.areaofcircle();
    r1.circumferance();
    return 0;
}

