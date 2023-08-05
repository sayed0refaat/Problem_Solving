#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main()
{
    string one , two;int num;
    cin>>one>>two;
    cin>>num;
    string arr[num*2+2];
    arr[0]=one;arr[1]=two;
    for(int i=2;i<num*2+2;i++){cin>>arr[i];}
 
for(int i=2;i<num*2+2;i+=2){
    if(arr[i]!=arr[i-1]  ){arr[i]=arr[i-1];}
  else  if(arr[i]!=arr[i-2]  ){arr[i]=arr[i-2];}
 
}
 for(int i=0;i<(num*2)+2;i=i+2){cout<<arr[i]<<" "<<arr[i+1]<<endl;}
 
    return 0;
}