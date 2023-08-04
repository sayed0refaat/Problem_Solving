#include <iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
   int x, counter=0;
   cin>>x;
   int arr[x];
   for(int i=0; i<x;i++){
    cin>>arr[i];
   }
   for(int i=0; i<x; i++){
    if(arr[i]!=arr[i+1]){
        counter++;
    }
   }
cout<<counter<<endl;
 
return 0;
}