#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
 
int main()
{
sayed
int x,y,cake=0;
 
cin>>x>>y;
 
//string str;
int row[10]={0};int col[10]={0};
 
for(int i=0;i<x;i++){
        string str;cin>>str;
  for(int j=0;j<y;j++){
 
    if(str[j]=='S'){row[i]=1;col[j]=1;}
  }
}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        if(row[i]==0||col[j]==0){cake++;}
    }
}
//for(int i=0;i<10;i++){cout<<col[i]<<" ";}cout<<endl;
cout<<cake<<endl;
 
 
 
 
return 0;
}