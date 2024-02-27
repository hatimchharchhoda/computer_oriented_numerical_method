#include<bits/stdc++.h>
using namespace std;

int fact(int i)
{
    while(i!=1)
        return i*fact(i-1);
}
int main()
{
    int n,k=1,q;
    cout<<"enter the no. of element you want to enter : ";
    cin>>n;
    double p,x[n],y[n],c[n],ans=0,mid=1;
    cout<<"enter the values of x : ";
    for(int i=0; i<n; i++)
        cin>>x[i];
    cout<<"enter the values of y : ";
    for(int i=0; i<n; i++)
        cin>>y[i];
    cout<<"enter the value of x for which you want to find y : ";
    cin>>p;
    p=(p-x[n/2])/(x[1]-x[0]);
    int ele=n/2;
    c[0]=y[ele];
    cout<<"1. Gauss Forward Interpolation\n2. Gauss Backward Interpolation\nenter an option : ";
    cin>>q;
    switch(q)
    {
    case 1:
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)
            {
                y[j]=y[j+1]-y[j];
                if(j==i/2)
                {
                    c[k]=y[j];
                    k++;
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
                    mid*=(p+y);
                    y++;
                }
                else
                {
                    mid*=(p-z);
                    z++;
                }
            }
            ans+=mid*c[i]/fact(i);
            mid=1;
        }
        cout<<endl<<"value of Y = "<<ans;
        break;

    case 2:
        for(int i=n-1; i>=0; i--)
        {
            for(int j=0; j<i; j++)
            {
                y[j]=y[j+1]-y[j];
                if(j==(i-1)/2)
                {
                    c[k]=y[j];
                    k++;
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
                    mid*=(p-y);
                    y++;
                }
                else
                {
                    mid*=(p+z);
                    z++;
                }
            }
            ans+=mid*c[i]/fact(i);
            mid=1;
        }
        cout<<endl<<"value of Y = "<<ans;
        break;

    default:
        cout<<"enter the option correctly";
        break;
    }
    return 0;
}
