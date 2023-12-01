
#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int l=-2e9,r=2e9;
    int n;cin>>n;
    while(n--){
        string s;int num;char op;
        cin>>s>>num>>op;
        if(s==">="){
            if(op=='Y'){
                l=max(l,num);
            }
            else{r=min(r,num-1);}
        }
        if(s==">"){
            if(op=='Y'){
                l=max(l,num+1);
            }
            else{r=min(r,num);}
        }
        if(s=="<"){
            if(op!='Y'){
                l=max(l,num);
            }
            else{r=min(r,num-1);}
        }
                if(s=="<="){
            if(op!='Y'){
                l=max(l,num+1);
            }
            else{r=min(r,num);}
        }


    }
       if (l<=r)cout<<l<<endl;
       else cout<<"Impossible"<<endl;



}
int main()
{

    solve();


           return 0;
}


