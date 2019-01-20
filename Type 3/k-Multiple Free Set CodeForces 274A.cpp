#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,i,j,k,l=0,d=0;

    set<int>st;
    cin>>x>>y;
    int v[x];
    for(i=0; i<x; i++)
        cin>>v[i];

    sort(v,v+x);
    for(i=0; i<x; i++)
    {
        if(v[i]%y!=0||st.find(v[i]/y)==st.end())
            st.insert(v[i]);
    }
    cout<<st.size()<<endl;
    return 0;
}
