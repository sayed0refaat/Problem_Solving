///I GOT HELP IN THIS CODE I STUCK FOR LONG TIME IN SEGMENT POINT BUT I LEARNED IT ...

#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long i,j,k;
        long long n,count=0;
        long long seg=0;
        long long l,r;

        cin>>n;
        long long a[n],s[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s[i]=a[i];
        }

        sort(s,s+n);
        for(i=0;i<n;i++)
        {
            if(s[i]==a[i])
                count++;
        }

        if(count==n)
        {
            cout<<"yes\n1 1";
            return 0;
        }

        for(i=0;i<n-1,seg<1;)
        {
            if(a[i]<a[i+1])
            {
                i++;
            }

            else
            {
                l=i;
                r=i;
               while(a[i]>a[i+1] && i<n-1)
               {
                   i++;
                   r++;
               }

               sort(a+l,a+r+1);
               seg++;
            }
        }


        for(i=0;i<n;i++)
        {
            if(s[i]!=a[i])
            {
                cout<<"no";
                return 0;
            }
        }

        cout<<"yes\n"<<l+1<<" "<<r+1;

        return 0;
}