#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,m;
    cin >> n;
    while(n--)
    {
        string line,sub,sub1;
        cin >> line;
        m=line.size();
        for(i=1; i<=m; i++)
        {
            if(m%i==0)
            {
                sub=line.substr(0,i);
                for(j=i; j<m; j=j+i)
                {
                    sub1=line.substr(j,i);
                    if(sub1!=sub)
                        goto here;
                }
                cout << i <<endl;

                goto there;
            }
            here:;
        }
        there:;
        if(n)
        cout<<endl;
    }
    return 0;
}