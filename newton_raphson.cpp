#include<iostream>
#include<math.h>
using namespace std;

double func(double i)
{
    return pow(i,3)+i-1;
}
double diff(double i)
{
    return 3*i*i+1;
}
int main()
{
    double a=100,b=100,i=0,y;
    int dif;
    cout<<"given equation is : x^3+x-1"<<endl<<"f'(x) = 3x^2+1"<<endl;
    while(a==100 || b==100)
    {
        float k;
        k=func(i);
        if(k<0)
            a=i;
        if(k>0)
            b=i;
        i=i+0.1;
    }
    cout<<"the intervals are : A = "<<a<<"  B = "<<b<<endl;
    for(float i=a;dif!=0;i++)
    {

        y=a-(func(a)/diff(a));
        dif=(int)(y*1000)-(int)(a*1000);
        a=y;
    }
    cout<<"root of the equation : "<<a;
    return 0;
}
