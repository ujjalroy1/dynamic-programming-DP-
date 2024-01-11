#include <bits/stdc++.h> 
#define ll long long int

bool func(int n,int k,vector<int>&v,vector<vector<ll>>&dp)
{
    if(k==0)return true;
   if(n<0)return false;
   
   if(dp[n][k]==0)return false;
   if(dp[n][k]==1)return true;
   bool b;
  // return b;
   b=func(n-1,k,v,dp);
   if(k-v[n]>=0)
   b|=func(n-1,k-v[n],v,dp);
  if(b==true)
  {
      dp[n][k]=1;
      return true;
  }
  dp[n][k]=0;
  return false;

}
bool subsetSumToK(int n, int k, vector<int> &arr)
 {
    
    vector<vector<ll>>dp(n+5,vector<ll> (k+5,-1));
   
    return func(n-1,k,arr,dp);
     

}
