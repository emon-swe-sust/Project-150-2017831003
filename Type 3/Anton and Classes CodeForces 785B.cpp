#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m=0,n=0,last=0,strt=0,lst=0,start=0,a=0,b=0,p,q;
    cin >>m;
    m--;
    cin >> a >> b;
    last=b;
    strt=a;
    while(m--)
    {
        cin >> a >> b;
        if(last>b)
            last=b;
        if(strt<a)
            strt=a;

    }
    cin >> n;
    cin >> a >> b;
    n--;
    start=a;
    lst=b;
    while(n--)
    {
        cin >> a >> b;
        if(start<a)
            start=a;
        if(b<lst)
            lst=b;
    }
    p=start-last;
    q=strt-lst;
    if(p>q && p>0)
        cout << p << endl;
    else if(q>p && q>0)
        cout << q << endl;
    else
        cout << 0 << endl;
    return 0;
}