#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n;
    string str;
    cin >> n;
    getline(cin,str);
    for(i=1;i<=n;i++)
    {
        string comp,nstr="",ncomp="";
        int strs=0,comps=0;
        getline(cin,str);
        getline(cin,comp);
        if(str==comp)
                cout <<  "Case " << i << ": Yes"<<endl;
        else
            {
                    for(j=0;j<str.size();j++)
                    {
                        if(str[j]==' ')
                            strs++;
                            else
                            nstr=nstr+str[j];
                    }
                      for(j=0;j<comp.size();j++)
                    {
                        if(comp[j]==' ')
                            comps++;
                            else
                                ncomp=ncomp+comp[j];
                    }
                    if(nstr!=ncomp)
                        cout <<  "Case " << i << ": Wrong Answer" << endl;
                    else
                        cout <<  "Case " << i << ": Output Format Error" << endl;
            }
    }
    return 0;
}
