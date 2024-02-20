#include<iostream>
using namespace std;

int fact(int i)
{
    while(i!=1)
        return i*fact(i-1);
}
int main()
{
    int n,k=1,h;
    cout<<"enter the no. of element you want to enter : ";
    cin>>n;
    double p,x[n],y[n],c[n],ans=0,mid=1;
    cout<<"enter the values of x : ";
    for(int i=0; i<n; i++)
        cin>>x[i];
    h=x[1]-x[0];
    cout<<"enter the values of y : ";
    for(int i=0; i<n; i++)
        cin>>y[i];
    cout<<"enter the value of x for which you want to find y : ";
    cin>>p;
    if(p<x[(n+1)/2])
    {
        c[0]=y[0];
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)
            {
                y[j]=y[j+1]-y[j];
                if(j==0)
                {
                    c[k]=y[j];
                    k++;
                }
            }
        }
        p=(p-x[0])/h;
        ans=c[0];
        for(int i=1;i<n;i++)
        {
            for(int j=0; j<i; j++)
                mid*=(p-j);
            ans+=mid*c[i]/fact(i);
            mid=1;
        }
    }
    if(p>x[(n+1)/2])
    {
        c[0]=y[n-1];
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)
            {
                y[j]=y[j+1]-y[j];
                if(j==i-1)
                {
                    c[k]=y[j];
                    k++;
                }
            }
        }
        p=(p-x[n-1])/h;
        ans=c[0];
        for(int i=1;i<n;i++)
        {
            for(int j=0; j<i; j++)
                mid*=(p+j);
            ans+=c[i]*mid/fact(i);
            mid=1;
        }
    }
    cout<<endl<<"value of Y = "<<ans;
    return 0;
}
