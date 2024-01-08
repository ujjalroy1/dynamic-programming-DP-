#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long int
#define endl "\n"
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define mod 1000000007;
int mazeObstacles(int n, int m, vector< vector< int> > &mat) 
{
    

     ll i,j;
      
        ll dp[n+5][m+5];
        ll arr[n][m];
         for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                arr[i][j]=mat[i][j];

            }
        }
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
        {
            if(arr[i][0]!=-1)
            dp[i][0]=1;
            else break;
        }
        for(i=0;i<m;i++)
        {
            if(arr[0][i]!=-1)
            dp[0][i]=1;
            else break;
        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(arr[i][j-1]!=-1)
                dp[i][j]=(dp[i][j]+dp[i][j-1])%mod;
                 if(arr[i-1][j]!=-1)
                dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;

            }
        }

    return dp[n-1][m-1];
}
