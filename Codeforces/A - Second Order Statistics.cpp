using namespace std;
#include <iostream>
#include <stdio.h>
#include <cmath>
#include<set>
 
 
int main()
{
 
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;cin>>x;s.insert(x);
    }
    if(s.size()>1){
      auto it=s.begin();
      it++;
      cout<<*it<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}