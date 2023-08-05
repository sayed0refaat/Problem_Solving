using namespace std;
#include <iostream>
#include <stdio.h>
#include <cmath>
#include<set>
#include<vector>
 
    int n,m;
    vector<pair<int,int >>vec;
 
bool can(int x){
    int badpairs=0;
    vector<int>valcant(n+3);
    for(int i=0;i<vec.size();++i){
        if(vec[i].first==x||vec[i].second==x){continue;}
 
    badpairs++;
    valcant[vec[i].first]++;
    valcant[vec[i].second]++;
    }
    for(int i=0;i<=n;++i){
        if(valcant[i]==badpairs){return true;}
 
}
return false;
}
int main()
{
 
 
    cin>>n>>m;
    vec.resize(m);
    for(int i=0;i<m;i++){
    cin>>vec[i].first>>vec[i].second;
        }
 
    if( can(vec[0].first) ){cout<<"YES"<<endl;}
    else if( can(vec[0].second) ){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
    return 0;
}