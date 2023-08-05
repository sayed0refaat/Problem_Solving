#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

int n,buy,sum=0;
cin>>n>>buy;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
for(int i=0;i<n;i++){
    if(i%2!=0){arr[i]--;}
}
for(int i=0;i<n;i++){
    sum+=arr[i];
}
/*for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}*/

//cout<<sum<<endl;
if(sum<=buy){cout<<"Yes"<<endl;}
else cout<<"No"<<endl;
return 0;
}