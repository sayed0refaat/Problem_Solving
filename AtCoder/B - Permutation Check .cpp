#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int x,counter=0;
    cin>>x;
    int arr[x],arr2[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    sort(arr,arr+x);

for(int i=0;i<x;i++){
   //cout<<arr[i]<<" "<<endl;
    arr2[i]=i+1;

}
for(int i=0;i<x;i++){
  // cout<<arr2[i]<<" "<<endl;
    if(arr[i]==arr2[i]){counter++;}

}


    //cout<<counter;
    if(counter==x){cout<<"Yes"<<endl;}
    else cout<<"No"<<endl;

  return 0;
}
