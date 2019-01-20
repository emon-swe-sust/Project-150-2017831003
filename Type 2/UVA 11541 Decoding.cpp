#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,time=0,position=0;
    string str;
    char ch;
    vector<char>vec;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> str;
        for(j=0;j<str.size();j++)
        {
            position=0;
            time=0;
            if(isalpha(str[j]))
            {
                ch=str[j];
                vec.push_back(ch);
            }
            else if(isdigit(str[j]))
            {
                while(isdigit(str[j]))
                {
                   time=time*10+(str[j]-'0');
                   j++;
                }
                j--;
                for(k=1;k<time;k++)
                {
                    vec.push_back(ch);
                }
            }
        }
        cout << "Case " << i << ": ";
        for(k=0;k<vec.size();k++)
        {
            cout << vec[k];
        }
        cout << endl;
        vec.clear();
        str="";
    }
    return 0;
}