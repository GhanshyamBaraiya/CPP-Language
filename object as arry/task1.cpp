#include<iostream>
using namespace std;
class Test
{
    int r,m,s,e,t;
    char name[50];
    public:
    void setdata()
    {
        cout<<"enter roll no:";
        cin>>r;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter mats marks:";
        cin>>m;
        cout<<"enter scince marks:";
        cin>>s;
        cout<<"enter english marks:";
        cin>>e;

    }
    void getdata()
    {
       
        cout<<"roll no:"<<r<<endl;
        cout<<"name :"<<name<<endl;
        cout<<"maths marks:"<<m<<endl;
        cout<<"scince marks:"<<s<<endl;
        cout<<"english marks:"<<e<<endl;
        cout<<"total marks:"<<(m+s+e)<<endl;
    }
    
};
int main()
{
Test a[5];
int i;
for(i=0;i<2;i++)
{
    cout<<"....detail of student:"<<i+1<<"...."<<endl;
    a[i].setdata();
    cout<<endl;
}
for(i=0;i<2;i++)
{
    cout<<"....detail of student:"<<i+1<<"...."<<endl;
    a[i].getdata();
    cout<<endl;
}
}