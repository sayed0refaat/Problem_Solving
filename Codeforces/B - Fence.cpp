#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n,k,z,target=2147483647;
cin>>n>>k;
int arr[n+1]={0};
for(int i=1;i<=n;i++){
    cin>>arr[i];
    arr[i]+=arr[i-1];
 
}
	for (int i = k;i <= n;i++)
	{
		if (target > arr[i] - arr[i - k])
		{
			target = arr[i] - arr[i - k];
			z = i;
		}
 
 
	}
	cout << z - k + 1;
 
 
   return 0;
 
}