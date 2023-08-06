#include <iostream>
#include<bits/stdc++.h>


using namespace std ;


int main()
{

    int n,x;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        //cin>>x;
        if(s[i]=='1'&&i%2==0){cout<<"Takahashi"<<endl;break;}
        if(s[i]=='1'&&i%2!=0){cout<<"Aoki"<<endl;break;}
    }












    /*
int counter=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){counter++;}
        if(s[i]==9&&s[i+1]==0){cout<<"WEAK"<<endl;return 0;}

    }
    if(counter==s.size()-1){cout<<"WEAK"<<endl;return 0;}


*/













/*
       int N;
  cin >> N;
 // vector<string> S(N);
  vector<int> T(N), TMP(N);
  for (int i = 0; i < N; i++) cin >>T[i];
  copy(T.begin(), T.end(), TMP.begin());
  sort(TMP.begin(), TMP.end());
  reverse(TMP.begin(), TMP.end());
  int index = find(T.begin(), T.end(), TMP[1]) - T.begin();
  cout << index << endl;

*/

/*

     int num,maxx=0,i=0,j=0;
cin>>num;
int arr[num];
for(int i=0;i<num;i++){
    cin>>arr[i];

}
for( i=0;i<2;i++){
        for(j=0;j<num;j++){
    if(arr[j]>maxx){maxx=arr[i];}
        }
        arr[j]=0;
        cout<<j<<endl;
}
//int x=sizeof(arr)/sizeof(arr[0]);

//sort(arr,arr+num);
//cout<<arr[n-2]<<endl;;
*/
  return 0;
}
