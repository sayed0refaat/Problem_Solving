#include <bits/stdc++.h>

using namespace std;

#define N 2005

int parent[N];

int main() {
    int n; cin>>n;

    for(int i=0;i<n;i++){
        int manager ; cin>>manager ;
        if(manager != -1){manager--;} /// zero based index
        parent[i]=manager;

    }

int ans=0;

    for(int i=0;i<n;i++ ){
       int depth=0,current_node=i;
       while(parent[current_node] != -1){
        depth++;
        current_node=parent[current_node];
       }
    ans=max(ans,depth);
    }

    cout<<ans+1<<endl;

    return 0 ;

}
