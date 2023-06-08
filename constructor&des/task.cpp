#include<iostream>
using namespace std;
class bio
{
    char name[50],location[50],hobby[50];
    int qualification,familym,age;
    public:
    bio()
    {
       cout<<"defualt constructor is called.."<<endl;
       cout<<"enter name:";
       cin>>name;
       cout<<"enter location:";
       cin>>location;
       cout<<"enter hobby:";
       cin>>hobby;
       cout<<"enter qualification:";
       cin>>qualification;
       cout<<"enter familym:";
       cin>>familym;
       cout<<"enter age:";
       cin>>age;
    }
    ~bio()
    {
        cout<<"destructer is called..."<<endl;
    }
    void getdata()
    {
        cout<<"name is:"<<name<<endl;
        cout<<"location:"<<location<<endl;
        cout<<"hobby:"<<hobby<<endl;
        cout<<"qualification:"<<qualification<<endl;
        cout<<"familym:"<<familym<<endl;
        cout<<"age:"<<age<<endl;
    }
};
int main()
{
    bio a;
    a.getdata();
}