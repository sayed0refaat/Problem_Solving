#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int n,rem;
    cin>>n>>rem;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==rem){arr[i]=-1285;}
    }
        for(int i=0;i<n;i++){
        if(arr[i]==-1285){continue;}
        cout<<arr[i]<<" ";

    }






    return 0;
}
