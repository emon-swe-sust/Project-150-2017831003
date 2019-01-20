#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,num,comp=0;
    string inp,str;
    char ch;
    vector<char>vec,ans;
    while(cin >> inp)
    {
        if(inp=="E-N-D")
            break;
        for(i=0;i<inp.size();i++)
        {
            if(isalpha(inp[i])||inp[i]=='-')
            {
                ch=tolower(inp[i]);
                vec.push_back(ch);
            }
            else
            {
                vec.clear();
            }
        }
         if(vec.size()>comp)
            {
                comp=vec.size();
                ans.clear();
                ans=vec;
            }
            vec.clear();
    }

    for(i=0;i<ans.size();i++)
        cout << ans[i];
    cout << endl;

    return 0;
}