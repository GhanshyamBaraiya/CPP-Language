#include<iostream>
using namespace std;
class shyam
{
    int flightnumber,calf;
    string destination;
    float distance,fuel;

    float CALFUEL()
    {
        if(distance<=1000)
        {
        cout<<"500";
        }
        else if (distance>=1000 && distance <=2000)
        {
            cout<<"1100";
        }
        else
        {
            cout<<"2200";
        }

    }
    public:
    void FIDINFO()
    {
        cout<<"enter flight number:";
        cin>>flightnumber;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter distance:";
        cin>>distance;
        calf= CALFUEL();

    }
    void SHOWINFO()
    {
        cout<<"flight number:"<<flightnumber<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance:"<<distance<<endl;
    }

};
int main()
{
    shyam a;
    a.FIDINFO();
    a.SHOWINFO();
}