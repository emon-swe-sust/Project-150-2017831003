#include<bits/stdc++.h>
using namespace std;

void mergsort(int *a,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int i,j,k=left,L[n1],R[n2];

    for(i=0;i<n1;i++)
        L[i]=a[left+i];

    for(i=0;i<n2;i++)
        R[i]=a[mid+i+1];

        i=0;
        j=0;

    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
        {
            a[k]=L[i];
            k++;
            i++;
        }
        else
        {
            a[k]=R[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
}

void merg(int *a,int left,int right)
{
    if(left<right){
    int mid=left+(right-left)/2;

    merg(a,left,mid);
    merg(a,mid+1,right);

    mergsort(a,left,mid,right);
    }
}

int main()
{
    int m,q,i,j,k=1,l;
    while(cin >> m >> q)
    {
        if(m==0 && q==0)
            break;
        int a[m],l[q];

        for(i=0;i<m;i++)
            cin >> a[i];

        for(i=0;i<q;i++)
            cin >> l[i];

        merg(a,0,m-1);

        cout << "CASE# " << k << ":" << endl;
        k++;
        for(j=0;j<q;j++)
        {
            for(i=0;i<m;i++)
            {
                if(a[i]==l[j]){
                    cout << l[j] << " found at " << i+1 << endl;
                    goto here;
                }
            }
            cout << l[j] << " not found" << endl;
            here:;
        }
    }
    return 0;
}