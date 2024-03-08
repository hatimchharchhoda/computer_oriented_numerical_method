#include<bits/stdc++.h>
using namespace std;

int main()
{
    float l,u,h;
    int len=0,a;
    cout<<"given equation is: 1/(1+x)"<<endl;
    cout<<"enter the limits for given equation : ";
    cin>>l>>u;
    cout<<"enter the value of h : ";
    cin>>h;
    double x[100],y[100],ans=0;
    for(double i=l; i<=u; i+=ch)
    {
        x[len]=i;
        len++;
    }
    for(int i=0; i<len; i++)
        y[i]=1/(1+x[i]);
    cout<<"which method you want to use\n1. Trapezoidal rule\n2. Simpson's 1/3 rule\n3. Simpson's 3/8 rule\nenter your choice: ";
    cin>>a;
    switch(a)
    {
    case 1:
        for(int i=0; i<len; i++)
        {
            if(i==0 || i==len-1)
                ans+=y[i];
            else
                ans+=(2*y[i]);
        }
        ans*=h/2;
        cout<<endl<<"value of given equation is = "<<ans;
        break;
    case 2:
        for(int i=0; i<len; i++)
        {
            if(i==0 || i==len-1)
                ans+=y[i];
            else if(i%2==0)
                ans+=(2*y[i]);
            else
                ans+=(4*y[i]);
        }
        ans*=h/3;
        cout<<endl<<"value of given equation is = "<<ans;
        break;
    case 3:
        for(int i=0; i<len; i++)
        {
            if(i==0 || i==len-1)
                ans+=y[i];
            else if(i%3==0)
                ans+=(2*y[i]);
            else
                ans+=(3*y[i]);
        }
        ans*=h*3/8;
        cout<<endl<<"value of given equation is = "<<ans;
        break;
    default:
        cout<<endl<<"invalid input";
        break;
    }
    return 0;
}
