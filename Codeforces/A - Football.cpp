#include <iostream>
#include<algorithm>
#include<vector>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int num;
    cin>>num;
    string arr[num] , winner=arr[0];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
 for(int i=0 ; i<num; i++){
//string winner=arr[0];
int maxx=count(arr,arr+num, winner);
    if(count(arr,arr+num,arr[i])>maxx){winner=arr[i];}
 
 
 }
 cout<<winner<<endl;
 //cout<<count(arr,arr+num,arr[2])<<endl;
 
    return 0;
}