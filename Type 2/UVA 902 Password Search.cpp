#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n,maxx=0;
    string save,line,sub;

    while(cin >> n)
    {
        cin >> line;
        map<string,int>mp;
        for(i=0; i<line.size()-n+1; i++)
        {
            map<string,int>mp;
            sub=line.substr(i,n);
            mp[sub]=0;
        }
        for(i=0; i<line.size()-n+1; i++)
        {
            sub=line.substr(i,n);
            mp[sub]++;
            if(mp[sub]>maxx)
            {
                maxx=mp[sub];
                save=sub;
            }
        }
        cout << save <<endl;
        save="";
        maxx=0;
    }
    return 0;
}