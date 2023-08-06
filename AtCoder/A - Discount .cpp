#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int n,x;
    cin>>n>>x;
    float y=(float)abs(x-n)/n;
    float z;
    z=(float)y*100;
   // cout<<z<<endl;
    cout<<fixed<<setprecision(15)<<z<<endl;


    return 0;
}
