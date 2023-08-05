using namespace std;
#include <iostream>
#include <stdio.h>
#include <cmath>
 
int main()
{
       int n, a, b, c, ans = 0, k;
    cin>>n>>a>>b>>c;
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=n; j++)
        {
            k = (n-(i*a+j*b))/c;
            if((i*a+j*b+k*c) == n && k >= 0)
            {
                if((i+j+k) > ans)
                    ans = i+j+k;
            }
        }
    }
    cout<<ans<<endl;
 
    return 0;
}