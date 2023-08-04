#include <iostream>
#include<string>
using namespace std;
int main()
{
int games_nums,SUMD=0,SUMA=0;
cin>>games_nums;
char uppercases[games_nums];
for(int i=0; i<games_nums; i++){
cin>>uppercases[i];
if(uppercases[i]=='D'){
    SUMD+=1;
 
}
else if(uppercases[i]=='A'){
    SUMA+=1;
}
 
}
if(SUMD<SUMA)
    cout<<"Anton";
 
else if(SUMD>SUMA)
    cout<<"Danik";
 
else if(SUMD==SUMA)
 
    cout<<"Friendship";
 
}