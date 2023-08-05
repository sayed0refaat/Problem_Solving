#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main( ) {
 
int numofcities,lives,counter;
    cin>>numofcities>>lives;
 
    int arr[numofcities];
    for(int i=1;i<=numofcities;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=numofcities;i++){
            int diff = i-lives; ///difference between the cities live and catch
            int k=lives - diff ;  /// distance to another city
            if(arr[i]==1){
                if(arr[i]==arr[k]||k>numofcities||k<1)counter++;
            }
 
 
    }
 
    cout<<counter<<endl;
 
    return 0;
 
 
 
 
}