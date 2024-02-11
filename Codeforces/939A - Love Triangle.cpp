// Two solutions 
// first

#include <bits/stdc++.h>

using namespace std;

#define N 5005

int G[N];

int main() {
    int n; cin>>n;
    bool flag=false;

    for(int i=1;i<=n;i++){
            cin>>G[i];
    }

    for(int i=1;i<=n;i++ ){
       if(G[G[G[i]]] == i){
            flag = 1;
            break;
                }
    }
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0 ;

}



//Second

/*

#include <bits/stdc++.h>

using namespace std;

#define N 5005

vector<int> G[N];

int main() {
    int n; cin>>n;

    for(int i=0;i<n;i++){
      int plane; cin>>plane;
      plane--;
      G[i].push_back(plane);
    }
    for(int i=0;i<n;i++){           //o(N)
        for(int j:G[i]){            //o(1)
            for(int k:G[j]){        //o(1)
                for(int c:G[k]){    //o(1)
                if(c==i){cout<<"YES\n"; return 0 ;}
            }

            }
        }

    }
    cout<<"NO\n";
    return 0 ;

}

*/