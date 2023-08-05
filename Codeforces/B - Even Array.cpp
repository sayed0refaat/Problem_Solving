#include <iostream>
#include<bits/stdc++.h>
 
using namespace std ;
void even(){
    int x,even=0,odd=0,fine=0;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){cin>>arr[i];}
for(int i=0;i<x;i++){
    if(i%2==0){
            if(arr[i]%2==0){fine++;}
            else even++;
 
    }
    else {
        if(arr[i]%2!=0){fine++;}
        else odd++;
    }
}
if(fine==x){cout<<"0"<<endl;}
else if(even==odd){cout<<odd<<endl;}
else cout<<"-1"<<endl;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        even();
    }
  return 0;
}