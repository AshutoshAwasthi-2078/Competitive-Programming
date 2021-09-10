#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int c=0,ans=0;

void find_garden(int i,int j,int n,int m,vector<vector<char>> &vec)
{
    if(i<0 || i>=n ||j>=m ||j<0||(vec[i][j]=='0'))
        return;
        
    if(vec[i][j]=='1')
    {
        c++;
        vec[i][j] ='0';
        find_garden(i-1,j,n,m,vec);
        find_garden(i+1,j,n,m,vec);
        find_garden(i,j+1,n,m,vec);
        find_garden(i,j-1,n,m,vec);
        find_garden(i-1,j-1,n,m,vec);
        find_garden(i-1,j+1,n,m,vec);
        find_garden(i+1,j-1,n,m,vec);
        find_garden(i+1,j+1,n,m,vec);
    }
}


int main() {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<vector<char>> vec(n,vector<char> (m,0));
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	            cin>>vec[i][j];
	    }
	    ans = 0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(vec[i][j]=='1')
	            {
	                c=0;
	                find_garden(i,j,n,m,vec);
	                ans = max(ans,c);
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}