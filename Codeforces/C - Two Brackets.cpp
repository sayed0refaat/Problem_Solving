#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int num;
cin>>num;
 
for(int k=0;k<num;k++){
    string s;
    cin>>s;
    int braket=0,subbraket=0,total=0;
 
    for(int i=0;i<s.size();i++){
    if(s[i]=='('){braket++;}
    else if(s[i]=='['){subbraket++;}
    else if(s[i]==')'&&braket>0){total++;braket--;}
    else if(s[i]==']'&&subbraket>0){total++;subbraket--;}
    }
cout<<total<<endl;
}    return 0;
}
 