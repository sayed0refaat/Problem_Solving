#include <iostream>
#include<algorithm>
 
using namespace std;
 
int main()
{
int nums,boy=0,counter=0,sum=0,result=0;
cin>>nums;
 
int arr[nums];
for(int i=0; i<nums; i++){
        cin>>arr[i];
        sum+=arr[i];
 
 
}
sort(arr,arr+nums);
result=sum/2;
for(int i=1; i<=nums; i++){
          boy+=arr[nums-i];counter++;
        if(nums==1){ cout<<"1"<<endl;break;}
        if(boy>result){ cout<<counter<<endl;break;}
 
}
//cout<<sum<<result<<boy<<counter<<endl;
 
 
    return 0;
}
