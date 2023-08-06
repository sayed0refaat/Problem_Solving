#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;



int main(){
int onee,twoo,threee;

string one,two,three;
cin>>one>>two>>three;
onee=one.size();
twoo=two.size();
threee=three.size();
if(one[onee-1]==two[0]&&two[twoo-1]==three[0]){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}

}




