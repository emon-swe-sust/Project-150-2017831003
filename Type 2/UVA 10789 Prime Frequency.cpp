#include<bits/stdc++.h>
using namespace std;

int isprime(int k)
{
    int i;
    if(k==0||k==1)
        return 0;
    for(i=2;i<k;i++)
    {
        if(k%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n,i,j,k,l,flag=0;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        string str;
        cin >> str;
        sort(str.begin(),str.end());
        cout <<"Case "<<i<<": ";
        for(j=0;j<str.size()-1;j++)
        {
            k=1;
            l=j;
            while(str[j]==str[j+1])
            {
                k++;
                j++;
            }
            if(isprime(k))
            {
                    cout <<str[j];
                    flag=1;
            }
        }

        if(flag==0)
            cout << "empty" <<endl;
        else
            cout<<endl;
        flag=0;
    }
    return 0;
}