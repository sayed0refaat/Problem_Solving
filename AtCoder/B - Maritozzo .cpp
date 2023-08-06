#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{
  string t, s1, s2, s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    cin >> t;
    int len = t.length();
    for(int i = 0;i < len;++i){
        if(t[i] == '1'){
            cout << s1;
        }
        if(t[i] == '2'){
            cout << s2;
        }
        if(t[i] == '3'){
            cout << s3;
        }
    }
    cout << endl;
  return 0;
}