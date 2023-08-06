#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int x,y,z; /// 0=rock 1=scissor 2=papper
    int arr[3]={0,1,2};
    cin>>x>>y;
    if(x==y){cout<<x<<endl;return 0;}
    else {
    for(int i=0;i<3;i++){
        if(x!=arr[i]&&y!=arr[i]){cout<<arr[i]<<endl;}
    }

    }



  return 0;
}
