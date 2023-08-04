
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
 string a,b;
 cin>>a>>b;
 for(int i=0;i<a.size(); i++){
    if(a[i]<92){
        a[i]+=32;
    }
    }
    for(int j=0; j<b.size(); j++){
        if(b[j]<92){
            b[j]+=32;
        }
    }
    if(a<b){
        cout<<"-1"<<endl;
    }
   else if(a>b){
        cout<<"1"<<endl;
    }
    else if(a==b){
        cout<<"0"<<endl;
    }
 
 
return 0;
}