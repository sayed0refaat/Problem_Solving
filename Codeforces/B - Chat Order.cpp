#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string x;
int num;
cin>>num;
stack<string> stackk;
set<string>sett;
for(int i=0;i<num;i++){
    cin>>x;stackk.push(x);
}
while(!stackk.empty()){
string findd=stackk.top();
stackk.pop();
if(sett.find(findd)==sett.end()){
    sett.insert(findd);
    cout<<findd<<endl;
 
}
}
    return 0;
}