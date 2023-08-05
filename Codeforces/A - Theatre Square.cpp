#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
long long m,n,a, hor=0,ver=0,res=0;
cin>>m>>n>>a;
hor=m/a;if(m%a!=0){hor++;}
ver=n/a;if(n%a!=0){ ver++;}
res=hor*ver;
cout<<res<<endl;
    return 0;
}