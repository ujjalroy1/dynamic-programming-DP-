 int minPathSum(vector<vector<int>>& grid) 
    {
        int n,m;
        int i,j;
        n=grid.size();
        m=grid[0].size();
        int dp[n][m];

        dp[0][0]=grid[0][0];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==0&&j==0)continue;
                int left,up;
                left=1000000000;
                up=1000000000;
                if(j>0)
                {
                    left=dp[i][j-1]+grid[i][j];
                }
                if(i>0)
                {
                    up=dp[i-1][j]+grid[i][j];
                }
                dp[i][j]=min(up,left);

            }

        }







        return dp[n-1][m-1];



    }
