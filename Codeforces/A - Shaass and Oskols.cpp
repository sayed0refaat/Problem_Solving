#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{ int z,k,x,y;
cin>>z;
int arr[z];
for(int i=0 ; i<z; i++){
    cin>>arr[i];
}
cin>>k;
for(int i=0; i<k; i++){
    cin>>x>>y;
    --x;
  if(x!=0){arr[x-1]+=(y-1);}
  if(x!=z-1){arr[x+1]+=(arr[x]-y);}
  arr[x]=0;
 
 
}
for(int i=0; i<z; i++){cout<<arr[i]<<endl;}
 
 
}