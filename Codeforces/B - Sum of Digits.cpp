#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main( ) {
string str;
cin>>str;
int len=str.length(),counter=0;
while(len>1){
        int sum=0;
for(int i=0;i<str.length();i++){sum+=(str[i]-48);}
 
str=to_string(sum);
len=str.length();
counter++;

 
}cout<<counter<<endl;
    return 0;
 
 
 
 
}