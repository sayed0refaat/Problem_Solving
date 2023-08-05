#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
int n,f;
cin>>n>>f;
vector< pair<int,int> > vec;
int arr[n];
int arr2[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    cin>>arr2[i];
 
}
 
///    2 3 2 1  ->  number of proudcts
///    1 5 3 5  ->  number of customers
///    put the two arrays into pair
 
for(int i=0;i<n;i++){
    vec.push_back(make_pair(min(2*arr[i],arr2[i])-min(arr[i],arr2[i]),i));
/// here we get the difference between the normal day and f day then sort them from max to min
 
}
sort(vec.rbegin(),vec.rend());
 
 
long long  answer=0;
 
for(int i=0;i<f;i++){
        int position = vec[i].second;
 
    answer += min(2*arr[position],arr2[position]);
}
 
//for(int i=0;i<n;i++){cout<<vec[i].first<<" "<<vec[i].second<<endl;}
///   after sorting and calculating f days
///   vector become like this
///   5 5 3 1
///   6 2 5 2
 
 
for(int i=f;i<n;i++){
int position=vec[i].second;
    answer += min(arr[position],arr2[position]);
}
 
cout<<answer<<endl;
 
      return 0;
 
}