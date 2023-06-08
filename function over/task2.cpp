#include<iostream>
using namespace std;
class clac
{
    public:
    int various(int l,int w)
    {
        return l*w;
       
    }
    int various(int a)
    {
        return a*a;
        
    }
    double various(double b,double h)
    {
        return 0.5*(b*h);
       
    }
    double various(double r)
    {
        return 3.14*r*r;
        
    }




};
int main()
{
    clac a;
     cout<<"rectangle is: "<<a.various(3,5)<<endl;
     cout<<"square is: "<<a.various(5)<<endl;
     cout<<"triangle is: "<<a.various(2,4)<<endl;
     cout<<"circle is: "<<a.various(5,8)<<endl;
}