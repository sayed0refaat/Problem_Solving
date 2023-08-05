#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n;
cin>>n;
string str,str2=" ";
cin>>str;
vector<char> vec;
if(n%2==0){str2+=str;}
 
vec.push_back(str[0]);
for(int i=1;i<n;i++){
    if(i%2==0){vec.push_back(str[i]);}
    else {vec.insert(vec.begin(),str[i]);}
}
if (n%2!=0){
	  for(int i=0;i<n;i++){
		  cout<<vec[i];
	  }
}
else {
    reverse(vec.begin(),vec.end());
    for(int i=0;i<n;i++){
		  cout<<vec[i];
	  }
 
}
 
   return 0;
 
}