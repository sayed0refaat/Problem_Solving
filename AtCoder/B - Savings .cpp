#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{long long  n,sum=0,counter=0;
cin>>n;
for(long long i=1;i<=1e10;i++){
    sum+=i;counter++;
    if(sum>=n){cout<<counter<<endl;return 0;}
}
}
