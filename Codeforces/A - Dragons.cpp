#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int s,n;
cin>>s>>n;
bool check=true;
multimap<int,int> mapp;
for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    mapp.insert({x,y});
    }
for(auto itr:mapp){
    if(itr.first<s){s+=itr.second;}
    else {check=false;break;}
}
if(check){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;
    return 0;
}
 