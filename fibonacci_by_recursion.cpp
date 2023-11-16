#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class type1>
#define ll long long int
#define endl "\n"
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using ordered_multiset = tree <type1, null_type, less_equal <type1>, rb_tree_tag, tree_order_statistics_node_update>;
 //ordered_multiset <ll> kek;(declaration for multiorder set)
// ordered_set o_set;(declaration)
//kek.order_of_key(i);(strictly less then i for multi order set)
//o_set.order_of_key(5) ;(strictly less then i for multi order set)
#define yes cout << "YES\n"
#define no cout << "NO\n"
ll fibo(ll n,vector<ll>&dp)
{
    if(n<=1)
    {
          return dp[n]=n;
    }
    if(dp[n]!=-1)return dp[n];
    return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
   ll n;
   cin>>n;
   vector<ll>dp(n+1,-1);
   ll r= fibo(n,dp);
   cout<<r<<endl;

    return 0;
}
