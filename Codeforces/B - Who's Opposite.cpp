#include <iostream>
#include <cmath>
#include <string>
using namespace std ;
long long  x;
/*void odd_divisor(){
    cin>>x;
while(x%2==0)x/=2;
 
    if(x==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
 
 
}*/
int m,y,z,nodes,r;
void circle(){
cin>>m>>y>>z;
r=abs(m-y);
nodes=(r*2);
//if(z+abs(m-y)==nodes){cout<<z+abs(m-y)<<endl;}
//else cout<<"-1"<<endl;
if(m>nodes||y>nodes||z>nodes){cout<<"-1"<<endl;}
else{
if(z+r<=nodes){cout<<z+r<<endl;}
else if(z-r<=nodes&&z-r>0){cout<<z-r<<endl;}
else cout<<"-1"<<endl;
}
}
int main()
{
/*long long n,x;
cin>>n;
while(n--){
//cin>>x;
    odd_divisor();
}
*/
int l;
cin>>l;
while(l--){
    circle();
}
 
 
    return 0 ;
}