#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
int size1=0,size2=0,index=0;
string str,spare,str1,str2;
cin>>str>>spare;
bool check=false;
for(int i=0;i<str.length();i++){
    if(str[i]=='|' ){index=i;}
}
 
for(int i=0;i<str.length();i++){
    if(str[i]!='|' && i <index ){str1+=str[i];size1++;}
 
    if(str[i]!='|'&&i >index  ){str2+=str[i];size2++;}
}
 
 
for (auto i : spare)
        if (str1.size() <= str2.size()) str1 += i;
        else str2 += i;
 
 
 
 
if(str1.size() == str2.size()){cout<<str1<<"|"<<str2<<endl;}
else{cout<<"Impossible"<<endl;}
 
 
    return 0;
};