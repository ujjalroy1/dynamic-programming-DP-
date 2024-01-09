   int func(int n,int m,vector<vector<int>>& grid,vector<vector<int>>&dp)
   {
         if(n==0&&m==0)return grid[n][m];
         if(n<0||m<0)return 1000000000;
         if(dp[n][m]!=-1)return dp[n][m];
         return dp[n][m]=min(func(n-1,m,grid,dp)+grid[n][m],func(n,m-1,grid,dp)+grid[n][m]);
   }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n,m;
        int i,j;
        n=grid.size();
        m=grid[0].size();
        // int dp[n][m];

        // dp[0][0]=grid[0][0];
        // for(i=0;i<n;i++)
        // {
        //     for(j=0;j<m;j++)
        //     {
        //         if(i==0&&j==0)continue;
        //         int left,up;
        //         left=1000000000;
        //         up=1000000000;
        //         if(j>0)
        //         {
        //             left=dp[i][j-1]+grid[i][j];
        //         }
        //         if(i>0)
        //         {
        //             up=dp[i-1][j]+grid[i][j];
        //         }
        //         dp[i][j]=min(up,left);

        //     }

        // }

        // return dp[n-1][m-1];
         vector<vector<int>>dp(n,vector<int>(m,-1));
        return func(n-1,m-1,grid,dp);



    }
