#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long m,sum=0,dif,unit,ang=0,fokir=0,n,k,i;
    scanf("%llu %llu",&m,&n);
    unsigned long long arr[n],flag[n]={0},angg[n]={0};
    for(i=0; i<n; i++)
    {
        scanf("%llu",&arr[i]);
        sum+=arr[i];
    }
    dif=sum-m;
    k=n;
    here:;
    unit=dif/k;
    if(unit < 1)
        unit = 1;
    for(i=0;i<n;i++)
    {
         if(dif==0)
            goto there;
        if(arr[i]>unit)
        {
            angg[i]=angg[i]+unit;
            dif=dif-unit;
            arr[i]=arr[i]-unit;
        }
        else
        {
            if(flag[i]==0)
            {
                angg[i]=angg[i]+arr[i];
                dif=dif-arr[i];
                arr[i]=arr[i]-arr[i];
                flag[i]=1;
                fokir++;
            }
        }
    }
     if(dif!=0){
            k=n-fokir;
            goto here;
     }
     there:;
     for(i=0;i<n;i++)
        ang=ang+(angg[i]*angg[i]);
     printf("%llu\n",ang);
     return 0;
}

