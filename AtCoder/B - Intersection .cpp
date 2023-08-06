#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int n,maxx=0,minn=1e6;
    cin>>n;
    int arr[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++)
      cin>>arr[i][j];
    }
for(int i=0;i<n;i++){
if(arr[0][i]>=maxx){maxx=arr[0][i];}
if(arr[1][i]<=minn){minn=arr[1][i];}
}
//cout<<maxx<<" "<<minn<<endl;
if(maxx>minn){cout<<"0"<<endl;return 0;}
else {cout<<minn-maxx+1<<endl;}
    return 0;
}