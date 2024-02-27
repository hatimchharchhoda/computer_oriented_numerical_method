#include<bits/stdc++.h>
using namespace std;

int fact(int i)
{
    while(i!=1)
        return i*fact(i-1);
}
int main()
{
    int n,k=1,fb;
    cout<<"enter the no. of element you want to enter : ";
    cin>>n;
    double p,x[n],y[n],c[n],ans=0,mid=1;
    cout<<"enter the values of x : ";
    for(int i=0; i<n; i++)
        cin>>x[i];
    cout<<"enter the values of y : ";
    for(int i=0; i<n; i++)
        cin>>y[i];
    cout<<"1. Gauss Forward Interpolation\n2. Gauss Backward Interpolation\nenter an option : ";
    cin>>fb;
    cout<<"enter the value of x for which you want to find y : ";
    cin>>p;
    p=(p-x[n/2])/(x[1]-x[0]);
    int ele=n/2;
    c[0]=y[ele];
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            y[j]=y[j+1]-y[j];
            if(fb==1)
            {
                if(j==i/2)
                {
                    c[k]=y[j];
                    k++;
                }
            }
            else
            {
                if(j==(i-1)/2)
                {
                    c[k]=y[j];
                    k++;
                }
            }
        }
    }
    for(int i=0; i<k; i++)
        ans=c[0];
    for(int i=1; i<n; i++)
    {
        int y=0,z=1;
        for(int j=0; j<i; j++)
        {
            if(j%2==0)
            {
                if(fb==1)
                    mid*=(p+y);
                else
                    mid*=(p-y);
                y++;
            }
            else
            {
                if(fb==1)
                    mid*=(p-z);
                else
                    mid*=(p+z);
                z++;
            }
        }
        ans+=mid*c[i]/fact(i);
        mid=1;
    }
    cout<<endl<<"value of Y = "<<ans;
    return 0;
}
