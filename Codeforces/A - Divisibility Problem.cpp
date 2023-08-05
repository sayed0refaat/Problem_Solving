#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
long long  moves=0;
void divisable(long a,long b){
         long long  movess=moves;
for(long long  i=0;i<1e12;i++){
 
if(a%b==0){cout<<"0"<<endl;break;}
else if(a%b!=0){cout<<b-(a%b)<<endl;break;}
}
 
}
 
int main()
{
    long long n;
    cin>>n;
    long long  arr[n*2];
    for(long long  i=0;i<n*2;i++){
        cin>>arr[i];
    }
    for(long long  i=0;i<n*2;i+=2){
        divisable(arr[i],arr[i+1]);
    }
 
 
    return 0;
}