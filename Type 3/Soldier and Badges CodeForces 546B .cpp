#include<bits/stdc++.h>
using namespace std;

void mergsort(int *a,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;
    int i,j,k=left,L[n1],R[n2];

    for(i=0; i<n1; i++)
        L[i]=a[left+i];

    for(i=0; i<n2; i++)
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
    if(left<right)
    {
        int mid=left+(right-left)/2;

        merg(a,left,mid);
        merg(a,mid+1,right);

        mergsort(a,left,mid,right);
    }
}

int main()
{
    int i,n,j,k,p,q,coun=0;
    cin >> n;

    int a[n]= {0},b[n]= {0};

    for(i=0; i<n; i++)
        cin >> a[i];

    merg(a,0,n-1);

    for(i=0; i<n; i++)
        b[i]=a[i];

    for(i=n; i>0; i--)
    {
        while(a[i]==a[i-1])
        {
            p=i;
            a[p]++;
            coun++;
            while(a[p]==a[i+1])
            {
                coun++;
                i++;
                a[p]++;
            }
            i=p;
        }
        merg(a,0,n-1);
    }
    cout << coun;
    coun =0;
}