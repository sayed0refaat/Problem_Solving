#include <iostream>
#include<bits/stdc++.h>
 
using namespace std ;
void candy(){
    long long  n,x,d1=0,d2=0,min1=0,min2=0,ans=0;
    cin>>n;
    vector<long long> a,b;
    for(long long i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
 
        }
 
 
    min1=*min_element(a.begin(),a.end());
 
    for(long long i=0;i<n;i++){
        cin>>x;
        b.push_back(x);
 
        }
 
    min2=*min_element(b.begin(),b.end());
 
    for(long long i=0;i<n;i++){
         d1=a[i]-min1;d2=b[i]-min2;
         ans+=max(d1,d2);
     }cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        candy();
    }
  return 0;
}