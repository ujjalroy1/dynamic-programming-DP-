


bool func(int n,int sum,vector<int>&v,vector<vector<int>>&dp)
{
    if(sum==0)return true;
	if(n<0)return false;
	if(sum<0)return false;
	if(dp[n][sum]!=-1)return dp[n][sum];
	bool ans;
	ans=func(n-1,sum,v,dp);
	
	ans|=func(n-1,sum-v[n],v,dp);
	
	return dp[n][sum]=ans;
    



}
bool canPartition(vector<int> &arr, int n)
{

     int sum;
	 sum=0;
	 for(int i=0;i<arr.size();i++)
	 {
		 sum+=arr[i];

	 }
	 if(sum%2)return false;

      sum/=2;
	  vector<vector<int>>dp(n+1,vector<int>(sum+5,-1));
	  return func(n-1,sum,arr,dp); 


	// Write your code here.
}
