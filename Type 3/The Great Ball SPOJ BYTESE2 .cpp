#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,man,i,k;
    cin >> test;
    while(test--)
    {
        int total=0,best=0,i,j;
        cin >> man;
        int *a = new int[man];
        int *b = new int[man];
        for(i=0;i<man;i++)
            cin >> a[i] >> b[i];

        sort(a,a+man);
        sort(b,b+man);

        i=0;
        j=0;

        while(i<man && j<man)
        {
            if(a[i] < b[j])
            {
                total++;
                i++;
            }
            else
            {
                total--;
                j++;
            }
            if(best < total)
                best = total;
        }

        cout << best << endl;
    }
    return 0;
}
