#include<iostream>
using namespace std;
int main()
{
    float a=100,b=100,c[20],q=1,k;
    cout<<"the given equation is : x^3-2x-2=0"<<endl;
    for(int i=0;a==100 || b==100;i++)
    {
        k=i*i*i-2*i-2;
        if(k<0)
            a=i;
        if(k>0)
            b=i;
    }
    cout<<"The initial interval we get is A : "<<a<<" and B : "<<b<<endl;
    cout<<endl<<"A\tB\tC\tF(c)"<<endl;
    cout<<a<<"\t"<<b<<"-\t-\t"<<endl;
    for(int i=0;q==1;i++)
    {
        c[i]=(a+b)/2;
        k=c[i]*c[i]*c[i]-2*c[i]-2;
        cout<<a<<"\t"<<b<<"\t"<<c[i]<<"\t"<<k<<endl;
        if(k<0)
            a=c[i];
        if(k>0)
            b=c[i];
        if(i>0)
        {
            int y,z;
            y=c[i]*1000;
            z=c[i-1]*1000;
            if(y-z==0)
            {
                q=0;
                k=y;
            }
        }
    }
    cout<<endl<<"The Ans of the equation is : "<<k/1000;
    return 0;
}
