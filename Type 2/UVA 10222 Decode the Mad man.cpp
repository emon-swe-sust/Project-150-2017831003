#include<bits/stdc++.h>
using namespace std;

int main()
{
    string key="qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string key2="QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string input;
    int i,j;
    getline(cin,input);
    for(i=0; i<input.size(); i++)
    {
        if(input[i]==' ')
            cout << " ";
        else
        {
            for(j=0; j<key.size(); j++)
            {
                if(input[i]==key[j]||input[i]==key2[j])
                {
                    cout << key[j-2];
                }
            }
        }

    }
    puts("");
    return 0;
}