#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int arr[3],maxx=0;
    cin>>arr[0]>>arr[1]>>arr[2];
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]+arr[j]>maxx){maxx=arr[i]+arr[j];}
        }
    }
    cout<<maxx<<endl;

  return 0;
}
