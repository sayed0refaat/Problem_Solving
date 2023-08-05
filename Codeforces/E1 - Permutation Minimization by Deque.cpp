#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int num;
cin>>num;
 
while(num--){
    int x,y;
    cin>>x;
    deque<int>d;
 
    for(int i=0;i<x;i++){
        cin>>y;
        if(y<d[0]||d.empty()){d.push_front(y);}
        else{d.push_back(y);}
        if(i==x-1){for(int i=0;i<d.size();i++){cout<<d[i]<<" ";}cout<<endl;}
 
    }

    return 0;
}