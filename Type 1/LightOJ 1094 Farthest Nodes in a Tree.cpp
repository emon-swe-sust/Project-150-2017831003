#include<bits/stdc++.h>
using namespace std;
int ret,best,l;
priority_queue<pair<int,int> >q;

void highest(int visit[],int dist[],vector<int> *vec,vector<int> *weight,int src)
{
    int i,j,k;
    visit[src]=1;
    for(i=0;i<vec[src].size();i++)
    {
        k=vec[src][i];
        if(visit[k]==0)
        {
            dist[k]=dist[src]+weight[src][i];
            visit[k]=1;
            //cout << " " << k << " " << visit[k] << "  " << dist[k] << endl;
            //cout << q.top() <<" " << dist[k] << " " <<endl;

            q.push({dist[k],k});
            highest(visit,dist,vec,weight,k);
        }
    }
}

int main()
{
    int test,i,j,k,n,u,v,w,ini;
    cin >> test;
    for(i=1;i<=test;i++)
    {
        pair<int,int>top;
        best=0;
        l=0;
        ret=0;
        cin >> n;
        vector<int>vec[n],weight[n];
        int visit[n],dist[n];
        for(k=0;k<n-1;k++)
        {
            cin >> u >> v >> w;
            vec[u].push_back(v);
            vec[v].push_back(u);
            weight[u].push_back(w);
            weight[v].push_back(w);
        }

            q.push({0,0});
            memset(visit,0,sizeof(visit));
            memset(dist,0,sizeof(dist));
            highest(visit,dist,vec,weight,0);
            top=q.top();
            ini=top.second;
            while(!q.empty())
            {
                q.pop();
            }
            memset(visit,0,sizeof(visit));
            memset(dist,0,sizeof(dist));
            highest(visit,dist,vec,weight,ini);
            top=q.top();
            cout << "Case " << i << ": " << top.first << endl; ;
            while(!q.empty())
            {
                q.pop();
            }
    }
    return 0;
}