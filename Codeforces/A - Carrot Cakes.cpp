#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
int x,y,z,k,div=0;
cin>>x>>y>>z>>k;
div=(x/z)+1;
if(x%z==0){div=x/z;}
int first=0, sec=k;
for(int i=0; i<div; i++){
    if(first<sec){first+=y;}
    else{sec+=y;}
}
if((y*div)<=sec ||sec==k ){cout<<"NO"<<endl;}
else
    {cout<<"YES"<<endl;}
}
