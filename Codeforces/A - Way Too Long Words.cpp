#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<set>
using namespace std;
int main()
 
 
{  int num;
cin>>num;
    string s;
    for(int i=0; i<num ; i++){
        cin>>s;
        if(s.length()<=10){cout<<s<<endl;}
        else{cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;}
 
    }
}