
#include <iostream>

using namespace std;
#include <stdio.h>
#include <cmath>
int main()
{

    float x;
    cin>>x;
    int y=x;
    if(x-y>0.5||x-y==0.5)cout<<ceil(x)<<endl;
     else cout<<floor(x)<<endl;



    return 0;
}
