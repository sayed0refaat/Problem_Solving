#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
 
int r1,r2,c1,c2,d1,d2,x,y,z,m;
cin>>r1>>r2>>c1>>c2>>d1>>d2;
 
/// r1=x+z
/// r2=y+m
///c1=x+y
///c2=z+m
///d1=x+m
///d2=y+z
 
x=(r1+c1-d2)/2;
y=(r2+d2-c2)/2;
z=(c2+d2-r2)/2;
m=(c2+d1-r1)/2;
 
if (x != z && x != y && x != m && z != y && z != m && y != m
        && x >= 1 && x <= 9
        && y >= 1 && y <= 9
        && z >= 1 && z <= 9
        && m >= 1 && m <= 9
        && y + m == r2
        && z + m == c2
        && z + y == d2
        && x + m == d1
 
        )
    {
cout<<x<<" "<<z<<endl;
cout<<y<<" "<<m<<endl;
    }
    else
    {
        cout << -1 << endl;
    }
 
 
 
 
    return 0;
};