#include<bits/stdc++.h>

using namespace std;

vector<int> g[30001];
bool visited[30001];
int a[30001];
int cnt=0;

int dfs(int u)
{
    visited[u]=true;
    for(int i=0; i<g[u].size(); i++){
        int v=g[u][i];
        if(!visited[v]){
            cnt++;
            dfs(v);
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int u, v;
        cin>>u>>v;
        u--, v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int mi=9999999, mx=-1;
    for(int i=0; i<n; i++){
        if(!visited[i]){

            int x=dfs(i);
            mx=max(mx, x+1);
            if(x!=0){
                mi=min(mi, x+1);
            }
            cnt=0;
        }
    }
    cout << mi << " " << mx << endl;

    return 0;
}
