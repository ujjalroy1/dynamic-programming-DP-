#include <bits/stdc++.h> 
#define ll long long int
ll dp[100000+123];
ll func(ll n)
{
      if(n==0||n==1)return 1;
      if(dp[n]>0)return dp[n];
      return dp[n]=(func(n-1)+func(n-2))%1000000007;
}
ll countDistinctWays(int nStairs)
 {
       return func(nStairs);
         
}
