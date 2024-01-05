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
ll func(ll n,ll m,vector<vector<ll>>&dp)
{  
    
    if(n==0&&m==0)return 1;
    if(n<0||m<0)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
   
    return dp[n][m]=func(n-1,m,dp)+func(n,m-1,dp);

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  ll n,m;
  cin>>n>>m;
  vector<vector<ll>>dp(n,vector<ll>(m,-1));
  cout<<func(n-1,m-1,dp)<<endl;

    return 0;
}
