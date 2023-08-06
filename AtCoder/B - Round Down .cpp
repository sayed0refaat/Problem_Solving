#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    string s;int n;
    cin>>s;
   n= s.find('.');
   //cout<<n<<endl;
//   cout<<:s[n]<<endl;
  cout<<s.substr(0,n)<<endl;
  return 0;
}
