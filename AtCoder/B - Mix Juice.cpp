#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

int n,y,sum=0;
cin>>n>>y;

int arr[n];
int x=sizeof(arr)/sizeof(arr[0]);
//cout<<x<<endl;
for(int i=0;i<n;i++){
        cin>>arr[i];


}
sort(arr,arr+x);
/*for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";


}*/
for(int i=0;i<y;i++){
   sum+=arr[i];
}
cout<<sum<<endl;
return 0;
}


