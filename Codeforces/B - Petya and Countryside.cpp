#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main( ) {
 
int n,x,after,before;
cin>>n;
 
vector<int> height(n);
for(int i=0;i<n;i++){cin>>height[i];}
vector<int> maximum (n,1);
 
///first index we will loop to the right only
for(int i=0;i<n-1;i++){
    if(height[i]>=height[i+1]){maximum[0]++;}
    else break;
}
//cout<<maximum[0]<<"********"<<endl;
 
/// last index we will loop to the left only
for(int i=n-1;i>=0;i--){
    if(height[i]>=height[i-1]){maximum[n-1]++;}
    else break;
}
//cout<<maximum[n-1]<<"********"<<endl;
 
/// in between index loop left and right also
 
for(int i=1;i<n-1;i++){
         x=i,after=i+1;before=i-1;;
        ///while loop to count the right
    while(height[x]>=height[after] &&after<n  ){
        maximum[i]++;
          x++;after++;
    }
    x=i;
       ///while loop to count the left
    while(height[x]>=height[before] &&before>=0  ){
        maximum[i]++;
          x--;before--;
    }
 
 
//cout<<maximum[i]<<"********"<<"i="<<i<<endl;
}
//for(int i =0; i<n;i++){cout<<maximum[i]<<" ";}
sort(maximum.begin(),maximum.end());
cout<<maximum[n-1]<<endl;
 
}