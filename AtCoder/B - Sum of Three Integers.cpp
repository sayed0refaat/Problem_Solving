#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n,s ,x=0,y=0,z=0,counter=0;
cin>>n>>s;

for(int i=0;i<=n;i++){
        x=i;
        for(int j=0;j<=n;j++){
                y=j;
                z=s-x-y;
            if(x+y+z==s &&x<=n&&y<=n&&z<=n &&z>=0){counter++;}

        }



}
cout<<counter<<endl;
    return 0 ;
}