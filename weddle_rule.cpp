#include<bits/stdc++.h>
using namespace std;

int main()
{
    float l,u,h;
    int len=0,a,p=1;
    cout<<"given equation is: 1/(1+x^2)"<<endl;
    cout<<"enter the limits for given equation : ";
    cin>>l>>u;
    cout<<"enter the value of h : ";
    cin>>h;
    double x[100],y[100],ans=0;
    for(double i=l; i<=u; i+=h)
    {
        x[len]=i;
        len++;
    }
    for(int i=0; i<len; i++)
        y[i]=1/(1+pow(x[i],2));
    for(int i=0; i<len; i++)
        {
            if(i==0 || i==len-1)
                ans+=y[i];
            else if(p<=6)
            {
                if(p==1 || p==5)
                    ans+=5*y[i];
                if(p==2 || p==4)
                    ans+=y[i];
                if(p==3)
                    ans+=6*y[i];
                if(p==6)
                    ans+=2*y[i];
                p++;
            }
            else
                p=1;
        }
    ans=3*ans/10;
    cout<<endl<<"value of given equation is = "<<ans;
    return 0;
}
