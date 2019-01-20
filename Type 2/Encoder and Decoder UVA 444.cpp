#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    while(getline(cin,line))
    {
        int i,j,k,num;
        char ch;
        if(isalpha(line[0]))
        {
            for(i=line.size()-1; i>=0; i--)
            {
                num=line[i];
                while(num>0)
                {
                    k=num%10;
                    cout << k;
                    num/=10;
                }
            }
            cout << endl;
        }
        else
        {
            reverse(line.begin(),line.end());
            for(i=0; i<line.size(); i++)
            {
                if(line[i]=='1')
                {
                    ch=100+(line[i+1])*10+(line[i+2])-11*'0';
                    cout << ch;
                    i=i+2;
               }
            else
                {
                    ch=(line[i]-'0')*10+(line[i+1]-'0');
                    cout << ch;
                    i++;
                }
            }
            cout << endl;
        }
    }
    return 0;
}