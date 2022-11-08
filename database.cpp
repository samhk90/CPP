#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class chareacter
{
public:
    char *d;
    long long contact;
    string name, add, c;
    chareacter()
    {
        // strcpy(name, "xxxxxxxxxxxxxxxxxx");
        name = "";
        add = "";
        // c="";
        d = new char;
    }
    void chare()
    {
        cout << "\nEnter name of student ";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter class of student:: ";
        cin >> c;
        cout << "\nEnter division:: ";
        cin >> d;
        cout << "\nEnter Contact address:: ";
        cin.ignore();
        getline(cin, add);
    }
    ~chareacter()
    {
        delete d;
    }
};
class number : public chareacter
{
public:
    int roll, dd, mm, yy;
    void no()
    {
        cout << "\nEnter Roll no.:: ";
        cin >> roll;
        cout << "\nEnter contact number:: ";
        cin >> contact;
        cout << "\nEnter DOB:: ";
        cin >> dd >> mm >> yy;
    }
};
class marks
{
    int mark;
    float per;

public:
    void info()
    {
        cout << "\nEnter 12th marks:: ";
        cin >> mark;
        cout << "\nEnter 12th percentage:: ";
        cin >> per;
    }
    friend class database;
};
class database : public number, public marks
{
public:
    void getdata()
    {
        chare();
        no();
        info();
    }

    void display()
    {
        cout << "\n1.Name:: " << name;
        cout << "\n2.Roll no.:: " << roll;
        cout << "\n3.DOB:: " << dd << "-" << mm << "-" << yy;
        cout << "\n4.class:: " << c;
        cout << "\n5.Division:: " << d;
        cout << "\n6.Roll no.:: " << roll;
        cout << "\n7.Contact Address :: " << add;
        cout << "\n8.Contact no.:: " << contact;
        cout<<"\n9.12th mark :: "<<mark;
        cout<<"\n10.12th percentage :: "<<per;
    }
};
int main()
{
    database s[100];
    int ch, scount = 0;
    do
    {
        cout << "\n****************DATABASE***************";
        cout << "\n1.Add Info";
        cout << "\n2.Display Info";
        cout << "\n3.EXIT";
        cout << "\nEnter choice:: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "\n****Add Info****";
            s[scount].getdata();
            scount++;
            break;
        }
        case 2:
        {
            cout << "\n****************DATABASE***************";
            for (int i = 0; i < scount; i++)
            {
                s[i].display();
                cout << "\n******************************";
            }
            break;
        }
        case 3:
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
    } while (ch != 3);
    getch();
    return 0;
}