#include <iostream>
#include <conio.h>
using namespace std;
class publication
{
   

public:
 string ttitle,btitle;
    float tprice,bprice;
    publicaion()
{
	ttitle="0";
	tprice=0;
	btitle="0";
	bprice=0;
}
    void bgetinfo()
    {
        cout << "\nEnter the Title:: ";
        cin.ignore();
        getline(cin,btitle);
        cout << "\nEnter the Price:: ";
        cin >> bprice;
    }
    void bputinfo()
    {
        cout << "\nTitle of Book:: " << btitle;
        cout << "\nPrice of Book:: " << bprice;
    }
    void tgetinfo()
    {
        cout << "\nEnter the Title:: ";
        cin.ignore();
        getline(cin,ttitle);
        cout << "\nEnter the Price:: ";
        cin >> tprice;
    }
    void tputinfo()
    {
        cout << "\nTitle of Book:: " << ttitle;
        cout << "\nPrice of Book:: " << tprice;
    }
};
class book : public publication
{
public:
int page;
    void getbook()
    {
        bgetinfo();
        cout << "\nEnter the number of pages:: ";
        cin >> page;
         try{
            if (page<500 && page>1000){
			
			throw(page);
			}
        }catch(int)
        {
            btitle="0";
            page=0;
            bprice=0.0;
            cout<<"\nInvalid Data";
        }
    }
    void putbook()
    {
       bputinfo();
    	cout<<"\nPage count:: "<<page; 
    }
};
class tape : public publication
{
public:
 float time;
    void gettape()
    {
        tgetinfo();
        cout << "\nEnter play Time in minutes";
        cin >> time;
        try{
            if (time<30.0 && time>90.0)
            {
			throw(time);
		}
        }
        catch(float)
        {
            ttitle="0";
            time=0.0;
           tprice=0.0;
            cout<<"\nInvalid Data";
        }
    }
    void puttape()
    {
    	tputinfo();
            cout<<"\nTime period:: "<<time;
       
    }
};
int main()
{
    book b[100];
    tape t[100];
    int ch, bcount = 0, tcount = 0;

  do{
        cout << "\n****************PUBLICATION***************";
        cout << "\n1.Add Book Info";
        cout << "\n2.Add Tape Info";
        cout << "\n3.Display Book Info";
        cout << "\n4.Display Tape Info";
        cout << "\n5.EXIT";
        cout << "\nEnter choice:: ";
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
            for (int i = 0; i < bcount+1;i++)
            {
                b[i].putbook();                
            }
            break;
        }
        case 4:
        {
            cout << "\n****************PUBLICATION***************";
            for (int j = 0; j < tcount+1; j++)
            {
                t[j].puttape();
                
            }
			break;
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
