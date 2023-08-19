#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int num;
cin>>num;
string str;
cin>>str;
stack<int>z,e,r,o,n;
for(int i=0;i<str.size();i++){
if(str[i]=='z'){z.push(str[i]);}
else if(str[i]=='e'){e.push(str[i]);}
else if(str[i]=='r'){r.push(str[i]);}
else if(str[i]=='o'){o.push(str[i]);}
else if(str[i]=='n'){n.push(str[i]);}
}
int zero=min(z.size(),min(e.size(),min(r.size(),o.size())));
 
for(int i=0;i<zero;i++){
    z.pop();e.pop();r.pop();o.pop();
}
//cout<<zero<<endl;
int one=min(n.size(),min(o.size(),e.size()));
//cout<<one<<endl;
for(int i=0;i<one;i++){
    n.pop();e.pop();o.pop();
}
for(int i=0;i<one;i++){
    cout<<"1"<<" ";
}
for(int i=0;i<zero;i++){
    cout<<"0"<<" ";
}
//cout<<z.size();
 
    return 0;
}
