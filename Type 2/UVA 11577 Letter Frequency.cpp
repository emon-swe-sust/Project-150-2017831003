#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,n,j;
    cin >> n;
    getchar();
    for(i=0;i<n;i++)
    {
        k=0;
        int a[26]={0};
        string line;
        char ch;
        getline(cin,line);
        for(j=0;j<line.size();j++)
        {

            if(isalpha(line[j]))
            {
                a[tolower(line[j])-'a']++;
            }
        }
       for(j=0;j<26;j++)
       {
           if(a[j]>k)
            k=a[j];
       }
       for(j=0;j<26;j++)
       {
           if(a[j]==k)
           {
               ch=j+'a';
               cout << ch;
           }
       }
       cout << endl;
    }
    return 0;
}
