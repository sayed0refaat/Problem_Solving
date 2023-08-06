#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{
 long long  k,a,b,c=0,d=0,suma=0,sumb=0;
    cin>>k>>a>>b;

for(long long  i=0;i<1e5;i++){
    c=a%10;if(c!=0){suma+=(c*pow(k,i));}
     a/=10;
    if(a==0)break;
}


for(long long i=0;i<1e5;i++){
    d=b%10;if(d!=0){sumb+=(d*pow(k,i));}
     b/=10;
    if(b==0)break;
}
cout<<suma*sumb<<endl;
  return 0;
}