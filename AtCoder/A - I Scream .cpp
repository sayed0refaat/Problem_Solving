#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int n,k;
    cin>>n>>k;
    if(n+k>=15&&k>=8){cout<<"1"<<endl;return 0;}
    if(n+k>=10&&k>=3){cout<<"2"<<endl;return 0;}
    if(n+k>=3){cout<<"3"<<endl;return 0;}
    else {cout<<"4"<<endl;return 0;}



    return 0;
}
