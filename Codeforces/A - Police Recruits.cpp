#include <iostream>
using namespace std;
int main()
{
int x,counter=0,sum=0;
cin>>x;
int arr[x];
for(int i=0; i<x; i++){cin>>arr[i];}
for(int i=0; i<x; i++){
         if(arr[i]<0){counter++;}
     if(arr[i]>0){sum+=arr[i];}
             if(arr[i]<0 && sum>=1){counter--;sum--;}
}cout<<counter;}