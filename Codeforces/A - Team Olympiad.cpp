#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main(){
 
int n,one=0,two=0,three=0;
vector<int> math,prog,pe;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==1){one++;prog.push_back(i);}
    if(arr[i]==2){two++;math.push_back(i);}
    if(arr[i]==3){three++;pe.push_back(i);}
}
int ans=min(one,min(two,three));
cout<<ans<<endl;
for(int i=0;i<ans;i++){
    cout<<prog[i]+1<<" "<<math[i]+1<<" "<<pe[i]+1<<endl;
 
}
    return 0;
};