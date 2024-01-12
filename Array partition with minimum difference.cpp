#include <bits/stdc++.h> 
// bool func(int n,int sum,vector<int>&v,vector<vector<int>>&dp)
// {

//         if(sum==0)return true;
// 		if(n<0)return false;
// 		if(sum<0)return false;
// 		if(dp[n][sum]!=-1)return dp[n][sum];
// 		bool ans;
// 		ans=func(n-1,sum,v,dp);
// 		ans|=func(n-1,sum-v[n],v,dp);
// 		return dp[n][sum]= ans;

// }
int minSubsetSumDifference(vector<int>& arr, int n)
{

    int sum,i,j;
	sum=0;
	if(n==1)return arr[0];
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int ans;
	ans=1000000000;
	
	  vector<vector<bool>>dp(n+1,vector<bool>(sum+5,false));
	//	bool b;
	//	b=func(n-1,x,arr,dp);
	for(i=0;i<n;i++)
	{
		dp[i][0]=true;
	}
   if(arr[0]<=sum)dp[0][arr[0]]=true;
   for(i=1;i<n;i++)
   {
	   for(j=1;j<=sum;j++)
	   {
		   bool bb,bbb;
		   bbb=false;
		 bb=dp[i-1][j];
		   if(arr[i]<=j)
		   {
			   bbb=dp[i-1][j-arr[i]];
		   }
		   dp[i][j]=bb|bbb;
	   }
   }
  

  for(int i=0;i<=sum;i++)
  {

     // cout<<dp[n-1][i]<<endl;
	  if(dp[n-1][i])
	  {
		 
		  ans=min(ans,abs(sum-i-i));
	  }
  }
    return ans;

	// Write your code here.
}
