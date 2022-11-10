#include <iostream>
#include <conio.h>
using namespace std;
class publication
{
private:
    char title[200];
    float price;

public:
    void getinfo()
    {
        cout << "\nEnter the Title:: ";
        cin.ignore(); // clear input buffer
        cin.getline(title, 200);
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
private:
    int page;

public:
    void getbook()
    {
        getinfo();
        cout << "\nEnter the number of pages:: ";
        cin >> page;
    }
    void putbook()
    {
        putinfo();
        if (page < 0)
        {
            cout << "\nInvalid Page count" << page;
        }
        else
        {
            cout << "\nPage count:: " << page;
        }
    }
};
class tape : public publication
{
private:
    float time;

public:
    void gettape()
    {
        getinfo();
        cout << "\nEnter play Time in minutes";
        cin >> time;
    }
    void puttape()
    {
        putinfo();
        if (time <= 0.0)
        {
            cout << "\nInvalid Play Time" << time;
        }
        else
        {
            cout << "\nPlay Time:: " << time;
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
