#include <iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int up=0, low=0;
    string s;
    cin>>s;
for(int i=0; i<s.size(); i++){
    if(isupper(s[i])){
       up++;
       }
}
for(int i=0; i<s.size(); i++){
    if(islower(s[i])){
       low++;
       }
}
if(up<low){
        for(int j=0; j<s.size(); j++){
 
 
    s[j]=tolower(s[j]);
    }
    cout<<s;
}
if(up>low){
        for(int j=0; j<s.size(); j++){
 
 
    s[j]=toupper(s[j]);
    }
    cout<<s;
}
if(up==low){
        for(int j=0; j<s.size(); j++){
 
 
    s[j]=tolower(s[j]);
    }
    cout<<s;
}
return 0;
}