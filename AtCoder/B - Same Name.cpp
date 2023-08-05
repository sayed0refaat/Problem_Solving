#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{bool flag=false;
    int n;
    cin>>n;
     string arr[n*2];
     for(int i=0;i<n*2;i++){
        cin>>arr[i];
     }
     for(int i=0;i<n*2;i+=2){
        for(int j=i+2;j<n*2;j+=2){
        if(arr[i]==arr[j]&&arr[i+1]==arr[j+1]){flag=true;cout<<"Yes"<<endl;return 0;}
     }
     }
if(flag==false)cout<<"No"<<endl;


  return 0;
}
