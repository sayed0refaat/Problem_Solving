#include <bits/stdc++.h>
using namespace std;


int n = 1e5 + 5,m;

vector<vector<int>> adj(n);
vector<int> a(n);
int ans = 0;

void dfs(int u,int p,int numconsecutive,int maxC)
{
    if (a[u])numconsecutive++;
    else numconsecutive = 0;
    maxC = max(maxC,numconsecutive);

    //now we know for each node the max # of
    //consecutive cats in the path from 1 to that node

    int numChild = 0;
    for (int v:adj[u]){
        if (v != p){
            dfs(v,u,numconsecutive,maxC);
            numChild++;
        }
    }
    if (numChild == 0 && maxC <= m)ans++;
}
int main()
{

    cin>>n>>m;
    for (int i = 1;i<=n;i++)cin>>a[i];
    for (int i = 1;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1,0,0);
    cout<<ans;
    return 0;
}
