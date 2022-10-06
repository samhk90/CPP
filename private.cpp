#include<iostream>
#include<conio.h>
using namespace std;
class productname
{
 int bread=20;
 int milk=40;
 int chips=10;
 int cola=20;
 friend class shop;
};
class code
{
    private:
	int b=1130;
	int m=1120;
	int c=1320;
	int col=1340;

friend class shop;
};
class shop:private productname,private code
{   public:
    void checklist()
    {
		cout<<"Product name "<<" code "<<" prize"<<endl;
		cout<<"milk:: "<<m<<"::"<<milk<<endl;
		cout<<"bread:: "<<b<<"::"<<bread<<endl;
		cout<<"chips:: "<<c<<"::"<<chips<<endl;
		cout<<"cola:: "<<col<<"::"<<cola<<endl;
    }
};
int main()
{
    shop owner;
    owner.checklist();
    getch();
    return 0;
}
