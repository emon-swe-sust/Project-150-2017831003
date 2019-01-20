#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string s,t;
    cin >> s >> t;
    int n=t.size()-1;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=t[n-i]){
            cout << "NO";
            goto here;
            }
    }
    cout << "YES";
    here:;
    return 0;
}