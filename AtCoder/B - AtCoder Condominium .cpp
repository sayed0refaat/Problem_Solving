#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
int n,x,sum=0;
cin>>n>>x;
for(int i=1;i<=n;i++){
    for(int j=1;j<=x;j++){
       sum+=((i*100)+j);
    }
}
cout<<sum<<endl;
  return 0;
}
