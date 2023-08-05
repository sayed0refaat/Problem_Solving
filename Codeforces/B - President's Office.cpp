#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n,m;
char color;
cin>>n>>m>>color;
char room [n][m];
 set<char> adj;
 
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			{cin >> room[i][j];}
	}
 
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
		{
			if (room[i][j] == color)
            {  
                /// these conditions to loop on four round the point and check that we are not out the limits
                if(i!=0&&room[i-1][j]!=color&&room[i-1][j]!='.')
                adj.insert(room[i-1][j]);
              if(i!=n-1&&room[i+1][j]!=color&&room[i+1][j]!='.')
                adj.insert(room[i+1][j]);
              if(j!=0&&room[i][j-1]!=color&&room[i][j-1]!='.')
                adj.insert(room[i][j-1]);
              if(j!=m-1&&room[i][j+1]!=color&&room[i][j+1]!='.')
                adj.insert(room[i][j+1]);
            }
				}
		} cout<<adj.size()<<endl;
 
   return 0;
 
}