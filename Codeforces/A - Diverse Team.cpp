#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int s,n;
cin>>s>>n;
set<int>sett;
vector<int> vec;
for(int i=0;i<s;i++){
   int a;cin>>a;
 
   if(!sett.count(a)){
    sett.insert(a);
    vec.push_back(i);}
}
if(n<=sett.size()){
    cout<<"YES"<<endl;
   for(int i=0;i<n;i++){cout<<vec[i]+1<<" ";}
}
else cout<<"NO"<<endl;
    return 0;
}