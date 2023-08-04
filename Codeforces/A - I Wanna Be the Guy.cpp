#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int check,first,second,counter =0;
cin>>check>>first;
int arr1[1000],arr[check];
for(int i=0; i<check ; i++){arr[i]=i+1;
 
}
for(int i=0; i<first ; i++){cin>>arr1[i];
 
}
cin>>second;
for(int i=first; i<second+first ; i++){cin>>arr1[i];
 
}
sort(arr1,arr1+(first+second));
for(int i=0; i<first+second ; i++){
if(arr1[i]!=arr1[i+1]){counter++;}
}
if(counter==check){cout<<"I become the guy."<<endl;}
else {cout<<"Oh, my keyboard!"<<endl;}
 
 
}