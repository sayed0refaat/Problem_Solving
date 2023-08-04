#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<set>
using namespace std;
int main()
 
 
{ string s,k;
getline(cin,s);
set<char> l;
//cin>>s;
//cout<<s.length()<<endl;
for(int i=0; i<s.length(); i++){
    if(isalpha(s[i])){k+=s[i];
     l.insert(s[i]);}
}
cout<<l.size()<<endl;
//cout<<k<<endl;
}