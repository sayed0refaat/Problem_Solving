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
int k;
void domino(){
cin>>k;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
 
    if(s[i]=='U'){s[i]='D';}
    else if(s[i]=='D'){s[i]='U';}
   // else if(s[i]=='R'){s[i]='L';}
    //else if(s[i]=='L'){s[i]='R';}
}
//for(int i=0;i<s.length();i++){cout<<s;}
cout<<s<<endl;
}
 
 
int main()
{
 
int n;
cin>>n;
while(n--){
    domino();
    }
    return 0 ;
}