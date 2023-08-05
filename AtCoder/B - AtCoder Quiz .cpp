#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{ string arr[4]={"ABC","AGC","AHC","ARC"};
int counter=0;
string s1,s2,s3;
        cin>>s1>>s2>>s3;

for(int i=0;i<4;i++){
     if(arr[i]!=s1&&arr[i]!=s2&&arr[i]!=s3){cout<<arr[i]<<endl;break;}
     ///else cout<<arr[i]<<endl;break;
}


  return 0;
}

