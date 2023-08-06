#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int counter=0;

string s;
cin>>s;
if(s.size()==1&&islower(s[0])){cout<<"Yes"<<endl;return 0;}
else if(s.size()==1&&isupper(s[0])){cout<<"No"<<endl;return 0;}
for(int i=0;i<s.size()-1;i++){
    if(islower(s[i])&&isupper(s[i+1])){counter++;}
}
if(counter==(s.size()/2)){cout<<"Yes"<<endl;}
else cout<<"No"<<endl;
    return 0;
}
