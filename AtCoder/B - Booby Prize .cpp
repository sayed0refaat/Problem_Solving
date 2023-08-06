#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{
  int n,maxx=0,i,index=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
    for(i=0;i<n;i++){
    if(arr[i]>=maxx){maxx=arr[i];index=i;}
  }
  //cout<<index<<endl;
          arr[index]=0;
          maxx=0;
   for(i=0;i<n;i++){
//cout<<arr[i]<<" ";
    if(arr[i]>=maxx){maxx=arr[i];index=i;}
  }
  cout<<index+1<<endl;
  return 0;
}
