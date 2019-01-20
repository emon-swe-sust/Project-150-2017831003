#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,tar,i,j,k,l,o,m,n,u,v,w;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d %d",&m,&n);
        vector<int>matrix[m],weight[m];
        int visit[m];
        int maxx[m];
        memset(visit,0,sizeof(visit));
        memset(maxx,INT_MAX,sizeof(maxx));
        while(n--)
        {
            cin >> u >> v >> w;
            matrix[u].push_back(v);
            matrix[v].push_back(u);
            weight[u].push_back(w);
            weight[v].push_back(w);
        }
        scanf("%d",&tar);
        maxx[tar]=0;
        queue<int>qu;
        qu.push(tar);
        while(!qu.empty())
        {
            k=qu.front();
            //cout <<" " <<k;
            for(j=0;j<matrix[k].size();j++)
            {
                l=matrix[k][j];
                if(visit[l]==0 && l!= tar)
                {
                    int p;
                    if(maxx[k]>weight[k][j])
                        p=maxx[k];
                    else p=weight[k][j];
                   // cout <<" From " << k << " to " <<  l << " " << maxx[k] << " " << maxx[l] << " " << weight[k][j] <<endl;
                    maxx[l]=p;
                   // cout <<" From " << k << " to " <<  l << " " << maxx[k] << " " << maxx[l] << " " << weight[k][j] <<endl;
                    visit[l]=1;
                    qu.push(l);
                }
                else if(l!=tar)
                {
                    int p;
                    if(maxx[k]>weight[k][j])
                        p=maxx[k];
                    else p=weight[k][j];
                   // cout <<" From::: " << k << " to " <<  l << " " << maxx[k] << " " << maxx[l] << " " << weight[k][j] <<endl;
                    if(maxx[l] > p)
                    {
                        maxx[l]=p;
                        qu.push(l);
                    }
                   // cout <<" From::: " << k << " to " <<  l << " " << maxx[k] << " " << maxx[l] << " " << weight[k][j] <<endl;
                    visit[l]=1;
                }
            }
            qu.pop();
        }
        printf("Case %d:\n",i);
        for(o=0;o<m;o++)
        {
            if(maxx[o]!=-1)
                printf("%d\n",maxx[o]);
            else
                printf("Impossible\n");
        }
    }
    return 0;
}