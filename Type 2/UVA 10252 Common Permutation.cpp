#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,k;
    while(getline(cin,a))
    {
        getline(cin,b);
            int aa[26]={0},bb[26]={0};

            for(i=0; i<a.size(); i++)
            {
                aa[a[i]-'a']++;
            }
            for(i=0; i<b.size(); i++)
            {
                bb[b[i]-'a']++;
            }
            for(i=0;i<26;i++)
            {
               for(j=0;j<min(aa[i],bb[i]);j++)
               {
                   cout << (char)(i+'a');
               }
            }
            cout << endl;
    }
    return 0;
}