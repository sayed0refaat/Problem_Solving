#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
    map <string,int> database;
    int n;
 
    cin>>n;
 
    while(n--){
        string str;
        cin>>str;
        if(database.count(str)==0){
            cout<<"OK"<<endl;
            database[str]=1;
        }
        else{
            cout<<str<<database[str]<<endl;
            database[str]++;
 
        }
 
    }
 
}