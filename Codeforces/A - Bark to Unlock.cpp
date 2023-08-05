#include <iostream>
#include<string>
using namespace std;
 
int main()
{ char know1,know2,lett1,lett2;
  cin>>know1>>know2;
 
    int n,t1=0,t2=0;
    cin>>n;
         for(int i=0;i<n;i++){
        cin>>lett1>>lett2;
        if(lett1==know1&&lett2==know2){
            cout<<"YES"<<endl;
            return 0;
        }
        if(lett2==know1)t2++;
        if(lett1==know2)t1++;
    }
    if(t1&&t2)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
 
       return 0;
}