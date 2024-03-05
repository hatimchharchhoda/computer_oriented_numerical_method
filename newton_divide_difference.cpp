#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,m=1,t;
    cout<<"enter the no. of element you want to enter : ";
    cin>>n;
    double p,s,x[n],y[n],diff[n-1],diff2[n],c[n],ans,mul=1;
    cout<<"enter the values of x : ";
    for(int i=0; i<n; i++)
        cin>>x[i];
    cout<<"enter the values of y : ";
    for(int i=0; i<n; i++)
        cin>>y[i];
    c[k++]=y[0];
    for(int i=0; i<n-1; i++)
        diff[i]=x[i+1]-x[i];
    cout<<"enter the value of x for which you want to find y : ";
    cin>>p;
    for(int i=0; i<n; i++)
        diff2[i]=p-x[i];
    for(int i=n-1; i>=0; i--)
    {
            for(int j=0; j<i; j++)
            {
                int u=m;
                s=0;
                y[j]=y[j+1]-y[j];
                for(int q=j;u>=1; q++)
                {
                    s=s+diff[q];
                    u--;
                }
                y[j]=y[j]/s;
                if(j==0)
                {
                    c[k]=y[j];
                    k++;
                }
            }
            m++;
    }

    ans=c[0];
    for(int i=1; i<k; i++)
    {
        mul=1;
        t=0;
        for(int j=i; j>0; j--)
        {
            mul*=diff2[t];
            t++;
        }
        ans+=c[i]*mul;
    }
    cout<<endl<<"value of Y = "<<ans;
    return 0;
}
