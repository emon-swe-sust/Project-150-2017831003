#include<bits/stdc++.h>
using namespace std;
int matrix[1001][1001],dist[1001];
typedef pair<int,int>ipair;
priority_queue<ipair, vector<ipair>, greater<ipair> >q;

void dijkstra(int n,int dist[])
{
    while(!q.empty())
    {
        pair<int,int>p;
        p=q.top();
        q.pop();
        int i,src;
        src=p.second;
       // cout << "SRC " << src << " " ;
        for(i=1; i<=n; i++)
        {
            if(matrix[src][i]!=0 && dist[src]+matrix[src][i] < dist[i])
            {
                dist[i]=dist[src]+matrix[src][i];
               // cout << dist[i] << " " ;
                q.push({dist[i],i});
            }
        }
    }
}

int main()
{
    int t,u,v,w,n,m,i,j;
    cin >> t ;
    for(i=1; i<=t; i++)
    {
        for(j=0; j<1001; j++)
            dist[j]=INT_MAX;

        memset(matrix,0,sizeof(matrix));

        cin >> n >> m;
        while(m--)
        {
            cin >> u >> v >> w;
            if(matrix[u][v]==0 || w < matrix[u][v])
            {
                matrix[u][v]=w;
                matrix[v][u]=w;
            }
        }
        dist[1]=0;
        q.push({dist[1],1});
        dijkstra(n,dist);
        if(dist[n]!=INT_MAX)
            cout << "Case " << i << ": " << dist[n] << endl;
        else
            cout << "Case " << i << ": Impossible" << endl;

    }
    return 0;
}