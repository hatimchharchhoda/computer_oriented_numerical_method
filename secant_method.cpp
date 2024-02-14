#include<iostream>
#include<math.h>
using namespace std;

double fun(double x)
{
    return pow(x,3)-2*x-5;
}
double secant(double x,double y)
{
    return x-((x-y)*fun(x)/(fun(x)-fun(y)));
}

int main()
{
    int dif;
    double x,y,z;
    cout<<"f(x) = x^3-2x-5"<<endl;
    cout<<"enter the approximation X and Y : ";
    cin>>x>>y;
    cout<<endl<<"initial values of X= "<<x<<"  Y= "<<y<<endl;
    for(int i=0;dif!=0;i++)
    {
        z=secant(x,y);
        dif=(int)(y*1000)-(int)(x*1000);
        x=y;
        y=z;
    }
    cout<<endl<<"root of the equation is : "<<y<<endl;
    return 0;
}
