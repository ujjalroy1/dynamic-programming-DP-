    int minimumTotal(vector<vector<int>>& tr) 
    {
        int n,m,i,j;
        n=tr.size();
        m=tr[n-1].size();
        vector<vector<int>>dp(n+10,vector<int>(m+10,0));
        for(i=0;i<m;i++)
        {
            dp[n-1][i]=tr[n-1][i];
        }
        //for(i=0;i<m;i++)cout<<dp[n-1][j]<<" ";
       // cout<<endl;
       for(i=n-2;i>=0;i--)
       {
           for(j=0;j<=i;j++)
           {
               dp[i][j]=tr[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
              // cout<<dp[i][j]<<" ";
           }
           cout<<endl;
       }
       return dp[0][0];


    }
