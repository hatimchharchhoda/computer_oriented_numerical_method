#include<iostream>
#include<math.h>
using namespace std;

void display(float d)
{
    float x,k=0;
    int c[100];
    for(int i=0;k==0;i++)
    {
        x=1/sqrt(1+d);
        c[i]=x*10000;
        if(i>0 && c[i]==c[i-1])
        {
            k=c[i];
            x=i;
        }
        else
            d=x;
    }
    cout<<endl<<"Roots for these equation is : "<<k/10000<<" at position : "<<x+1<<endl;
}
int main()
{
    int a=100,b=100,k;
    float d;
    cout<<"given equation : x^3+x^2-1"<<endl;
    for(int i=0;a==100 || b==100;i++)
    {
        k=i*i*i+i*i-1;
        if(k<0)
            a=i;
        if(k>0)
            b=i;
    }
    cout<<"Interval we get is A : "<<a<<" and B : "<<b<<endl;
    d=(a+b)/2;
    if((1/(2*sqrt(1+b)))>=1)
        cout<<"cannot find roots";
    else
        display(d);
    return 0;

}
