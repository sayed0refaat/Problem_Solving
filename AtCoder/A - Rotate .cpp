#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
char arr[3];
for(int i=0;i<3;i++){
    cin>>arr[i];
    char temp;
    if(i==2){temp=arr[0];arr[0]=arr[1];arr[1]=arr[2];arr[2]=temp;}
}

for(int i=0;i<3;i++){
    cout<<arr[i];
}
  return 0;
}
