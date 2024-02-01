#include <bits/stdc++.h> 
int func(vector<int>&we,vector<int>&val,int n,int mxw,vector<vector<int>>&dp)
{
	if(n==0)
	{
		if(we[n]<=mxw)
		return val[n];
		return 0;
	}
	if(dp[n][mxw]!=-1)return dp[n][mxw];
	int take,nottake;
	take=0;
	nottake=func(we,val,n-1,mxw,dp);
	if(mxw-we[n]>=0)
	{
		take=val[n]+func(we,val,n-1,mxw-we[n],dp);
	}
	return dp[n][mxw]=max(take,nottake);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	
     vector<vector<int>>dp(n,vector<int>(maxWeight+1,-1));
     return func( weight, value, n-1, maxWeight,dp);

	
}
