#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str,finals;
    int j=0;
cin>>str;
   // getline(cin,str);
 
 
    for(int i=0; i<str.length(); i++){
                    if(str[i]!='+'){finals+=str[i]; j++;}
        }
       sort(finals.begin(),finals.end());
        for(int i=0; i<j ; i++){
        if(i==j-1){cout<<finals[i]<<endl;}
        else   cout<<finals[i]<<"+";
        }
    return 0;
}