#include<iostream>
#include<cmath>
#include<string>
using namespace std;
 
 
int main()
{
   string s ;
   cin>>s;
   for(int i=0 ;i<s.length();i++)
	   if(s[i]>'4')                  
		   s[i]='9'-s[i]+'0';
 
 
    if(s[0]=='0') s[0]='9';      // "9"654 after inverting  will be "0"344    
   cout<<s;
 
 
 
	return 0 ;
}