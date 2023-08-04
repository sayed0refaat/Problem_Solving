#include <iostream>
 
using namespace std;
 
int main()
{
int longs , divisible;
cin>>longs>>divisible;
 
if(longs==1 && divisible==10){cout<<"-1"<<endl;}
else {
        cout<<divisible;
    if(divisible==10){for(int i=0; i<longs-2; i++){cout<<0;}}
    else if(divisible!=10){for(int i=0; i<longs-1; i++){cout<<0;}}
}
 
    return 0;
}