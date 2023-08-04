#include <iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{ int price,coins,counter=1;
cin>>price>>coins;
for(int i=0; i<1000; i++){
 if((price*counter)%10==0 || (price*counter)%10==coins){counter+=0;}
 else
 {
     counter++;
 }
}
cout<<counter<<endl;
}