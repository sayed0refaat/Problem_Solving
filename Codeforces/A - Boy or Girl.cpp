#include <iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main()
{
string str;
int counter =0;
cin>>str;
sort(str.begin(),str.end());
for(int i=0; i<str.size();i++ ){
    if(str[i]!=str[i+1]){
        counter++;
    }
}
if(counter%2==0){
    cout<<"CHAT WITH HER!"<<endl;
}
else
    cout<<"IGNORE HIM!"<<endl;
 
    return 0;
}