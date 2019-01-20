#include<bits/stdc++.h>
using namespace std;

int binary(int *arr,int Start,int End,int Find)
{
    int mid;
    if(End>=Start){
    mid=(Start+End)/2;
    if(arr[mid]==Find)
        return mid;
    else if(arr[mid]>Find)
        return binary(arr,Start,mid-1,Find);
    else if(arr[mid]<Find)
        return binary(arr,mid+1,End,Find);
    }
    return Start;
}

int main()
{
    int i,j,piles,k,good,coun=0;
    cin >> piles;
    int *arr=new int[piles];
    for(i=0; i<piles; i++)
    {
        cin >> k;
        coun+=k;
        arr[i] = coun;
    }

    cin >> good;
    int *ac = new int[good];

    for(i=0; i<good; i++)
        cin >> ac[i];

    for(i=0; i<good; i++)
    {
        k=ac[i];
        coun=binary(arr,0,piles-1,k);
        cout << coun+1 << endl;
    }

    return 0;
}