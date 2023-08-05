#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{int p_counter=0,m_counter=0;
char x[5];

    cin>>x;
    int len=strlen(x);

    for(int i=0;i<len;i++){
            if(x[i]=='+'){p_counter++;}
            if(x[i]=='-'){m_counter++;}
            }
            int diff=p_counter-m_counter;
            if(diff>=0){cout<<diff<<endl;}
            if(diff<0){cout<<diff<<endl;}




    return 0;
}
