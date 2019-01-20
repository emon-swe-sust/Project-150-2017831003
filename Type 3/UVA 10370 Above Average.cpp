#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m;
    double ans,ans1=0.0,total=0.0,num;
    vector <double> vec;
    cin >> n;
    for(j=0;j<n;j++)
    {
        cin >> m;
        for(k=0;k<m;k++)
        {
            cin >> num;
            vec.push_back(num);
            ans1=ans1+num;
        }

        ans1=ans1/m;

        for(i=0;i<vec.size();i++)
        {
            if(vec[i]>ans1)
            {
                total++;
            }
        }
            ans=(total*100)/m;

        printf("%0.3lf",ans);
        cout << '%' << endl;

        ans1=0.0;
        total=0.0;
        ans=0.0;
        vec.clear();
    }
    return 0;
}