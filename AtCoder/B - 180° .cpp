#include <iostream>
#include<bits/stdc++.h>


using namespace std ;

int main()
{string str;
cin>>str;
reverse(str.begin(),str.end());
//cout<<str<<endl;
for(int i=0;i<str.size();i++){
        if(str[i]=='6'){str[i]='9';}
        else if(str[i]=='9'){str[i]='6';}

}
cout<<str<<endl;
    return 0;
}
