class Solution {
public:
 int func(int n,int m,vector<vector<int>>& tr,vector<vector<int>>& dp,int i,int j)
 {
        if(i==n-1)return tr[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        return dp[i][j]=tr[i][j]+min(func(n,m,tr,dp,i+1,j),func(n,m,tr,dp,i+1,j+1));
 }
    int minimumTotal(vector<vector<int>>& tr) 
    {
        int n,m,i,j;
        n=tr.size();
        m=tr[n-1].size();
        vector<vector<int>>dp(n+10,vector<int>(m+10,-1));
    //     for(i=0;i<m;i++)
    //     {
    //         dp[n-1][i]=tr[n-1][i];
    //     }
    //     //for(i=0;i<m;i++)cout<<dp[n-1][j]<<" ";
    //    // cout<<endl;
    //    for(i=n-2;i>=0;i--)
    //    {
    //        for(j=0;j<=i;j++)
    //        {
    //            dp[i][j]=tr[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
    //           // cout<<dp[i][j]<<" ";
    //        }
    //        cout<<endl;
    //    }
    //    return dp[0][0];
        
      return func(n,m,tr,dp,0,0);

    }
};
