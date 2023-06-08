#include<iostream>
    using namespace std;
     class clac
    {
    public:
     double solid(int r,int h)
    {
        return 3.14*r*r*h;
    }
     double solid(double r1)
    {
       return (4*3.14*r1*r1*r1)/3;
      
    }
    int solid(int a)
    {
       return a*a*a;
       
    }
    double solid(double b,double h)
    {
        return b*h;
        
    }
    };
    int main()
    {
        clac a;
        cout<<"Volume of cylinder is: "<<a.solid(2.0,3.0)<<endl;
        cout<<"Volume of cube is "<<a.solid(3.0)<<endl;
        cout<<"Volume of sphere is "<<a.solid(5)<<endl;
        cout<<"volume of prism is: "<<a.solid(3,9)<<endl;
    }