#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[50];
    float Maths,English,Science,total;
    float ctotal()
    {
        return  Maths + English + Science;
    }
     public:
     void takedata()
    {
        cout<<"Enter admno:";
        cin>>admno;

        cout<<"Enter Maths:";
        cin>>Maths;

        cout<<"Enter English:";
        cin>>English;

        cout<<"Enter Science:";
        cin>>Science;
        total=ctotal();
    }
    void showdata()
       {
       cout<<"admin is:"<<admno<<endl;
       cout<<"sname is:"<<sname<<endl;
       cout<<"eng marks is:"<<English<<endl;
       cout<<"sci marks is:"<<Science<<endl;
       cout<<"maths marks is:"<<Maths<<endl;
       cout<<"total marks is:"<<total<<endl;

       
        }
        
    };

int main()
{
    student a;
    a.takedata();
    a.showdata();
    
}