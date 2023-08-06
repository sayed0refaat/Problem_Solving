#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
int arr[3];
cin>>arr[0]>>arr[1]>>arr[2];

if(arr[0]==arr[1]){cout<<arr[2]<<endl;return 0;}
else if(arr[0]==arr[2]){cout<<arr[1]<<endl;return 0;}
else if(arr[2]==arr[1]){cout<<arr[0]<<endl;return 0;}
else if(arr[0]!=arr[1]&&arr[0]!=arr[2]&&arr[1]!=arr[2]){cout<<"0"<<endl;return 0;}

  return 0;
}