#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
 
int main()
{
sayed
string s;
cin>>s;
int n,counter=0;
cin>>n;
int arr[26];
for(int i=0;i<26;i++){cin>>arr[i];}
for(int i=0;i<s.size();i++){
    counter+=((i+1)*(arr[s[i]-'a']));
}sort(arr,arr+26);
int maxx=arr[25];
for(int i=0;i<n;i++){
 
    counter+=((s.size()+1+i)*maxx);
}
cout<<counter<<endl;
return 0;
}