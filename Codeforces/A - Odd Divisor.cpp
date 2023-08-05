#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
long long  x;
void odd_divisor(){
    cin>>x;
while(x%2==0)x/=2;
 
    if(x==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
 
 
}
 
int main()
{
long long n,x;
cin>>n;
while(n--){
//cin>>x;
    odd_divisor();
}
 
 
    return 0 ;
}