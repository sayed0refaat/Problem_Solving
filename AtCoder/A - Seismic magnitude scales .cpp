#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{
int a,b,diff=0,sum=1;
cin>>a>>b;
diff=a-b;
for(int i=0;i<diff;i++){
    sum*=32;
}
    cout<<sum<<endl;

  return 0;
}

