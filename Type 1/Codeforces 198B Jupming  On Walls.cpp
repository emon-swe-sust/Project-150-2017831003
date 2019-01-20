#include <bits/stdc++.h>
using namespace std;
const int maxn=1e5+100;
int n,m,water;
char a[2][maxn];
int v[2][maxn];
int dfs(int pos,int j){
    if(j>n) return 1;
    if(a[pos][j]=='X'||j<water||v[pos][j]) return 0;
    v[pos][j]=1;
    water++;
    int f=dfs(pos,j-1)||dfs(1-pos,j+m)||dfs(pos,j+1);
    water--;
    return f;
}
int main(){

    scanf("%d %d",&n,&m);
        water=1;
        scanf("%s %s",a[0]+1,a[1]+1);
        if(dfs(0,1)) printf("YES\n");
        else printf("NO\n");
    return 0;
}