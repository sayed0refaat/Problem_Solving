#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{

  bool flag=true;
int a,b,c,d;
cin>>a>>b>>c;
for(int i=1;i<10001;i++){
   // d=c*i;
    if(a<=c*i && b>=c*i){flag=false;cout<<c*i<<endl;break;}
}

if(flag)cout<<"-1"<<endl;

























  return 0;
}
