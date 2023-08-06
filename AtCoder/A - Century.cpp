#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{ int n,d;float x;
//bool flag=false;
cin>>n;
x=float(n)/100;
d=n/100;
//cout<<x<<endl;
//cout<<d<<endl;
if(d==x){cout<<d;return 0;}
if(x>float(d)){cout<<d+1;return 0;}

  return 0;
}
