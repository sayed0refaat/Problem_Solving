#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{
    int n,x,sum=0;
    cin>>n;
    while(n--){
        cin>>x;
        if(x>10){sum+=(x-10);}
    }
cout<<sum<<endl;

  return 0;
}
