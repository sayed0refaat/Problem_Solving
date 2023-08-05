#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
 
 
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int n,a,b,c;
cin>>n;
while(n--){
    cin>>a>>b>>c;
    if(abs(a+c-2*b)%3==0){cout<<"0"<<endl;}
    else cout<<"1"<<endl;
 
}
 
    return 0;
}