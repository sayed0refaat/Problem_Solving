#include <iostream>
#include<string>
using namespace std;
int main()
{
int x,y;
cin>>x>>y;
int sum_x=x*3;
int sum_y=y*2;
for (int i=1; i<100; i++){
if(sum_x> sum_y){
        cout<<i;
 
        break;
}
 
    else {
        sum_x*=3;
        sum_y*=2;
    }
}
}