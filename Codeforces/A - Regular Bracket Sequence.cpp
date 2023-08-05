#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
int main()
{
    sayed
    string str;
 
    int n;cin>>n;
    while(n--){
       cin>>str;
      // int len=str.size();
       if(str[0]!=')'&& str.back()!='(' &&str.size()%2==0) cout<<"yes"<<endl;
       else cout<<"no"<<endl;
    }
 
return 0;
}