#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#define sayed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
 
int main()
{
    sayed
string str;
//cin>>str;
getline(cin,str);
set<char> s;
for(int i=0;i<str.size();i++){
    if(str[i]!='{' &&str[i]!='}'&&str[i]!=','&&str[i]!=' '){s.insert(str[i]);}
 
}
//cout<<str.size()<<endl;
cout<<s.size()<<endl;
 
return 0;
}