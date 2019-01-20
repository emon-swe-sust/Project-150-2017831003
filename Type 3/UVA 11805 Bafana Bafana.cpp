#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,p,i,j,ans;
     cin >> t;
     for(i=1;i<=t;i++)
     {
         cin >> n >> k >> p;
         ans=(k+p)%n;
         if(ans==0)
            cout << "Case " << i << ": " << n << endl;
         else
            cout << "Case " << i << ": " << ans << endl;
     }
     return 0;
}