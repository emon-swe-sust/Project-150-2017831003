#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,r,p,rc,n,c,x=0;

    while(cin >> n)
  {
    r=0;
    c=n/2;
    rc=n-1;

    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }

    for(i=1;i<=n*n;i++)
    {
        a[r][c]=i;

        if(r!=0) r=r-1;
        else r=rc;

        if(c!=rc) c=c+1;
        else c=0;

        if(a[r][c]!=0)
        {
            if(r==rc-1) r=0;
            else if(r==rc) r=1;
            else r=r+2;

            if(c!=0)c=c-1;
            else c=rc;
        }

    }
     if(x==1) cout << endl;
    cout << "n=" << n <<", "<<"sum=" << n*(n*n+1)/2 << endl;

     for(i=0;i<n;i++)
    {
        cout << " ";
        for(j=0;j<n;j++)
        {
           if(n==3) cout << a[i][j];
           else if(n>3 && n <=9) cout << setfill(' ') << setw(2) << a[i][j];
           else cout << setfill(' ') << setw(3) << a[i][j];

           if(j!=n-1)
            cout << ' ';
        }
        if(i!=n-1)
        cout << endl;
    }

    cout << endl;
    x=1;
  }
return 0;
}