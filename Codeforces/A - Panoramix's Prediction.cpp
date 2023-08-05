#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
int num1,num2,counter=0;
cin>>num1>>num2;
int arr[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
 
 
for(int i=0; i<15;i++){
   if(num1==arr[i]&&num2==arr[i+1]){counter++;}
 
}
 
if(counter==1){cout<<"YES"<<endl;}
else
    cout<<"NO"<<endl;
 
    return 0;
}