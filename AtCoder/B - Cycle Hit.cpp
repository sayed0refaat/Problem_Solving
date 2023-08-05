#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{ string arr[4]={"H","2B","3B","HR"};
int counter=0;
string s1,s2,s3,s4;
        cin>>s1>>s2>>s3>>s4;

for(int i=0;i<4;i++){
     if(arr[i]!=s1&&arr[i]!=s2&&arr[i]!=s3&&arr[i]!=s4){counter++;}
     ///else cout<<arr[i]<<endl;break;
}
if(counter==0)cout<<"Yes"<<endl;
else cout<<"No"<<endl;

  return 0;
}
