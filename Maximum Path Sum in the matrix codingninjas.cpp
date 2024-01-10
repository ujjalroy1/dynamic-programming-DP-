#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
ll dp[10005][10005];
ll arr[10005][10005];
 ll n,m;
ll func(ll i,ll j)
{
    if(j<0||j>=m)return -100000000000000;
    if(i==0)return arr[i][j];
    if(dp[i][j]!=-10000000000000)return dp[i][j];
    ll ans;
    ans=func(i-1,j);
    ans=max(ans,func(i-1,j-1));
    ans=max(ans,func(i-1,j+1));
    return dp[i][j]=ans+arr[i][j];
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.


      ll n,m,i,j,k;
       n=matrix.size();
       m=matrix[0].size();
        ll arr[n][m],dp[n+4][m+5];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                arr[i][j]=matrix[i][j];
            }
        }

       ll ans;
       ans=-10000000000;

             for(j=0;j<n;j++)
             {
                 for(k=0;k<m;k++)
                 {
                     dp[j][k]=-10000000000;
                 }
             }
            for(j=0;j<m;j++)dp[0][j]=arr[0][j];
            for(j=1;j<n;j++)
            {
                for(k=0;k<m;k++)
                {
                   ll xx;
                   xx=-10000000000;
                   if((k-1)>=0)
                   {
                       xx=dp[j-1][k-1];
                   }


                  xx=max(xx,dp[j-1][k]);

                   if(k<m-1)
                   {
                       xx=max(xx,dp[j-1][k+1]);
                   }
                   dp[j][k]=xx+arr[j][k];
                }
            }
            for(j=0;j<m;j++)
            {
                //cout<<dp[n-1][j]<<" ";
                ans=max(ans,dp[n-1][j]);
            }



       return ans;


}
