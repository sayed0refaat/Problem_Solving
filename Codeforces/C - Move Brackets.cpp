#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int num;
cin>>num;
while(num--)
{
    int n,close=0,open=0,moves=0;string s;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='('){open++;}
        else {close++;}
        if(close>open){moves++;close--;}
    }
 cout<<moves<<endl;
}
    return 0;
}