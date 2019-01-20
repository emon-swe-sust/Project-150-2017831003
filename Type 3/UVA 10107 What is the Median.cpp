#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <long long> vec;
    long long b,k,l;
    int i,j;

    while(cin >> b)
    {
        vec.push_back(b);
        sort(vec.begin(),vec.end());

        i=vec.size();
        if(i%2==1)
        {
            l=(i-1)/2;
            cout << vec[l] << endl;
        }
        else
        {
            l=i/2;
            cout << (vec[l-1]+vec[l])/2 << endl;
        }
    }
    
    return 0;
}