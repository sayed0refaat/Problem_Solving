#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n;
cin>>n;
string str="ROYGBIV";
int j=0;
for(int i=0;i<n;i++){
     if (j==7)j-=4;
    cout<<str[j++];
 
    }
 
   return 0;
 
}