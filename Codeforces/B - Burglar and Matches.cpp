#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main( ) {
 
int carry , num ,sum=0 ;
cin>>carry>>num;
 
pair<int,int> pairs[100];
pair<int,int> pairs2[100];
for(int i=0;i<num;i++){
    cin>>pairs[i].first>>pairs[i].second;
}
 
 
for(int i=0;i<num;i++){
 
 pairs2[i].second=pairs[i].first;
 pairs2[i].first=pairs[i].second;
}
 

 
sort(pairs2,pairs2+num);
reverse(pairs2,pairs2+num);
 
 

 
 
for(int i=0;i<num;i++){
    if(carry>=pairs2[i].second){
        sum+=(pairs2[i].second)*(pairs2[i].first);
        carry-=pairs2[i].second;
    }
    else{
        sum+=(carry * pairs2[i].first);
        carry=0;
    }
    if(carry<=0){break;}

}

cout<<sum<<endl;
    return 0;
 
 
 
 
}