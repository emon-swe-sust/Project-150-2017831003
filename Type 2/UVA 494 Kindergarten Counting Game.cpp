#include<bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    int i,j,word=0;
    while(getline(cin,line))
    {
        for(i=0;i<line.size();i++)
        {
           if(!isalpha(line[i])&&isalpha(line[i+1]))
              word++;
        }
        if(!isalpha(line[0]))
            word--;
        cout << word+1 << endl;
        word=0;
    }
    return 0;
}