#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
int arr[3];
cin>>arr[0]>>arr[1]>>arr[2];
sort(arr,arr+3);
if(arr[0]==arr[1]==arr[2]){cout<<"Yes"<<endl;return 0;}
if(abs(arr[0]-arr[1])==abs(arr[1]-arr[2])){cout<<"Yes"<<endl;return 0;}
else {cout<<"No"<<endl;return 0;}
  return 0;
}

