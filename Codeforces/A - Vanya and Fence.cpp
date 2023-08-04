#include <iostream>
#include<string>
using namespace std;
int main()
{
int sum=0,friends_num, fence_height;
cin>>friends_num>>fence_height;
int tall [friends_num];
 
for(int i=0; i<friends_num; i++){
    cin>>tall[i];
    if(tall[i]>fence_height){
        sum+=2;}
        else{
            sum+=1;
    }
}
 cout<<sum;
    return 0;
}