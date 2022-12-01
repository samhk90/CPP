#include <iostream>
#include <conio.h>
using namespace std;
class publication
{
   

public:
 string title;
    float price;
    void getinfo()
    {
        cout << "\nEnter the Title:: ";
        cin.ignore(); // clear input buffer
        getline(cin,title);
        cout << "\nEnter the Price:: ";
        cin >> price;
    }
    void putinfo()
    {
        cout << "\n********************************";
        cout << "\nTitle of Book:: " << title;
        cout << "\nPrice of Book:: " << price;
    }
};
class book : public publication
{
public:
int page;
    void getbook()
    {
        getinfo();
        cout << "\nEnter the number of pages:: ";
        cin >> page;
    }
    void putbook()
    {
        
        try{
            if (page>50&& price>100){
            putinfo();
            cout<<"\nPage count:: "<<page;
            }else{throw(page);}
        }catch(int)
        {
            title="0";
            page=0;
            price=0.0;
            cout<<"\nInvalid Data";
            putinfo();
            cout<<"\nPage count:: "<<page;

        }
    }
};
class tape : public publication
{
public:
 float time;
    void gettape()
    {
        getinfo();
        cout << "\nEnter play Time in minutes";
        cin >> time;
    }
    void puttape()
    {
       try{
            if (time>30.0 && time<90.0 && price>100)
            {putinfo();
            cout<<"\nTime period:: "<<time;}
            else{throw(time);}
        }
        catch(float)
        {
            title="0";
            time=0.0;
            price=0.0;
            cout<<"\nInvalid Data";
            putinfo();
            cout<<"\nTime period:: "<<time;

        }
    }
};
int main()
{
    book b[100];
    tape t[100];
    int ch, bcount = 0, tcount = 0;

    do
    {
        cout << "\n****************PUBLICATION***************";
        cout << "\n1.Add Book Info";
        cout << "\n2.Add Tape Info";
        cout << "\n3.Display Book Info";
        cout << "\n4.Display Tape Info";
        cout << "\n5.EXIT";
        cout << "\nEnter choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\n****Add Book****";
            b[bcount].getbook();
            bcount++;
            break;
        }
        case 2:
        {
            cout << "\n****Add Tape****";
            t[tcount].gettape();
            tcount++;
            break;
        }
        case 3:
        {
            cout << "\n****************PUBLICATION***************";
            for (int i = 0; i < bcount; i++)
            {
                b[i].putbook();
                break;
            }
        }
        case 4:
        {
            cout << "\n****************PUBLICATION***************";
            for (int i = 0; i < tcount; i++)
            {
                t[i].puttape();
                break;
            }
        }
        case 5:
        {
            cout << "\nThank you";
            break;
        }
        default:
        {
            cout << "\nInvalid Option";
            break;
        }
        }
    } while (ch != 5);
    getch();
    return 0;
}
