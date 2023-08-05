#include <iostream>
#include<string>
using namespace std;
 
int main()
{string one,two;
cin>>one>>two;
int len1=one.length(),len2=two.length(),counter=0;
 
int i=one.size()-1 ; int j=two.size()-1;
while( i>=0 && j>=0  ){
if(one[i]==two[j]){counter+=2;}
else if (one[i]!=two[j] ){break;}
i--;j--;
}
cout<<(len1+len2)-counter<<endl;
    return 0;
}