#include <iostream>
 
using namespace std;
 
int main()
{
int coloms,temp,temp2;
cin>>coloms;
int arr[coloms];
for(int i=0; i<coloms;i++){cin>>arr[i];}
for(int g=0;g<coloms;g++){
for(int j=0; j<(coloms-1); j++){
    if(arr[j]>arr[j+1]){
       temp=arr[j];
       temp2=arr[j+1];
       arr[j]=temp2;
       arr[j+1]=temp;}
}
}
for(int r=0; r<coloms; r++){    cout<<arr[r]<<" ";}
}