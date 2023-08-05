#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
int main()
{
    sayed
    string str;
    cin>>str;
    int open=0,close=0,num=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){open++;}
        else close++;
        if(open>0&&close>0){num+=2;open--;close--;}
        if(open==0){close=0;}
    }
 
    cout<<num<<endl;
return 0;
}