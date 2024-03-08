#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no. of element you want to enter : ";
    cin>>n;
    double x[n],y[n],p,top[n],mult,muld,ans=0;
    cout<<"enter the values of x : ";
    for(int i=0; i<n; i++)
        cin>>x[i];
    cout<<"enter the values of y : ";
    for(int i=0; i<n; i++)
        cin>>y[i];
    cout<<"enter the value of x for which you want to find y : ";
    cin>>p;
    for(int i=0; i<n; i++)
        top[i]=p-x[i];
    for(int i=0; i<n; i++)
    {
        mult=1;
        muld=1;
        for(int j=0; j<n; j++)
        {
            if(j!=i)
            {
                mult*=top[j];
                muld*=(x[i]-x[j]);
            }
        }
        ans+=(mult*y[i]/muld);
    }
    cout<<endl<<"value of Y = "<<ans;
}
