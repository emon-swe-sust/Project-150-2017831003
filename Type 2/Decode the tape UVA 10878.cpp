#include<bits/stdc++.h>
using namespace std;

int btd(int l)
{
    int k,i,m=1,j=0,dec=0;
    k=l%10;
    dec=k*1;
    l=l/10;
    while(l>0)
    {
        k=l%10;
        m=m*2;
        k=k*m;
        l=l/10;
        dec=dec+k;
    }
    return dec;
}

int main()
{
    int i,j,k,dec,m,n,binary;
    string c,ans="";
    char ch;
    getline(cin,c);

    while(1)
    {
        int flag=0;
        string str;
        getline(cin,str);
        if(str[0]=='_')
            break;
        for(i=0;i<str.size()-1;i++)
        {
            if(str[i]=='o' && flag==0)
            {
                flag=1;
                m=1;
                goto here;
            }
            if(flag==1)
            {
                if(str[i]=='o')
                    m=(m*10)+1;
                else if(str[i]==' ')
                    m=m*10;
            }
            here:;
        }
        ch=btd(m);
        ans=ans+ch;
    }
    cout << ans;
    return 0;
}
