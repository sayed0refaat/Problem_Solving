#include <iostream>
#include <cmath>
#include <string>
#include<bits/stdc++.h>
 
using namespace std ;
 
 
int main()
{
long long  t;
    cin>>t;
    while(t--)
    {
        long long m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        string s1, s2, s3, s4;
 
        long long cnt=0,sum=0;
        bool ans=0;
        cin>>s1>>s2;
 
        sort(s1.begin(),s1.end());
 
        for(i=0; i+s1.size()<= s2.size(); i++)
        {
            s3=s2.substr( i, s1.size());
            sort(s3.begin(),s3.end());
           // cout<<s1<<" "<<s3<<endl;
            if(s1==s3){ans=1;break;}
        }
 
        if(!ans)  cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
 
    }
 
 
    return 0 ;
}