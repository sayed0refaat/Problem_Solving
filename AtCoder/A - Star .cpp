#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
int n;
cin>>n;
if(n<100){cout<<100-n<<endl;return 0;}
for(int i=100;i<1e5+1;i+=100){
    if(n==i){cout<<"100"<<endl;return 0;}
    if(i>n){cout<<i-n<<endl;return 0;}
}
    return 0;
}
