#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
string s;
cin>>s;

if(isupper(s[0])&&isupper(s[1])&&isupper(s[2])&&s[0]==s[1]&&s[1]==s[2]){cout<<"Won"<<endl;}
else cout<<"Lost"<<endl;

    return 0;
}
