#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
string S;
 
stack<char> s;
    cin>>S;
    for(int i=0;i<S.size();i++)
    {
        char ch = S[i];
        if(!s.empty()&&ch==s.top())s.pop();
        else s.push(ch);
    }
    if(s.empty())cout<<"Yes\n";
    else cout<<"No\n";
 
	return 0;
}