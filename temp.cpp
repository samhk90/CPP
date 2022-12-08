#include<iostream>
#include<conio.h>
using namespace std;
int n,i,j,s=100;
template<class t>
void selection(t arr[100])
{
    int min;
    t temp;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
cout<<"\nSorted list::\n";
for (i = 0; i < n; i++)
{
    cout<<"\t"<<arr[i];
}}
int main()
{
    int a[s],ch;
    float b[s];
    do
    {
        cout<<"\n1.int sort \n2.float sort \n3.Exit";
        cout<<"\nEnter choice:: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            {cout<<"\nEnter number of elements:: ";
            cin>>n;
            for ( i = 0; i < n; i++)
            {
                cout<<"\nEnter element:: ";
                cin>>a[i];
            }selection(a);
            break;}
        case 2:
            {cout<<"\nEnter number of elements:: ";
            cin>>n;
            for ( i = 0; i < n; i++)
            {
                cout<<"\nEnter element:: ";
                cin>>b[i];
            }selection(b);
            break;}
        case 3:{
            cout<<"\nThank you";
        }
        default:
            break;
        }
    } while (ch!=3);
    getch();
    return 0;
}