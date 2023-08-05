#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//const long long INF = 1ll << 32;
 
 
int main()
{
 sayed
 const long long overflow=1ll << 32;
 int n;cin>>n;
 stack<long long> stk;
 stk.push(1);
 long long  x=0;
 while(n--){
    string str;cin>>str;
    if(str=="for"){int k;cin>>k;stk.push (min(overflow,(stk.top()*k)));}
 
    else if(str=="end"){stk.pop();}
    else{x+=stk.top();}
 
 }
 if(x>=overflow){cout<<"OVERFLOW!!!"<<endl;}
 else cout<<x<<endl;
 
 
return 0;
}