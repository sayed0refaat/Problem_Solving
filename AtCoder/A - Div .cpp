#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
int n,counter=0;
cin>>n;
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++)
    if(i+j==n){counter++;}
}cout<<counter<<endl;
  return 0;
}