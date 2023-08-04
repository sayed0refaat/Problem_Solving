#include <iostream>
using namespace std;
int main(){
int x,counter=0;
cin>>x;
char var[x];
cin>>var;
for(int i=0; i<x; i++){
    if(var[i]==var[i+1]){counter++;}}
cout<<counter<<endl;
}