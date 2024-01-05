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
ll func(ll n,ll m)
{
    ll i,j;
    ll dp[n][m];
    memset(dp,0,sizeof(dp));
    for(i=0;i<m;i++)
    {
        dp[0][i]=1;
    }
    for(i=0;i<n;i++)dp[i][0]=1;
    for(i=1;i<n;i++)
    {
          for(j=1;j<m;j++)
          {
              dp[i][j]=dp[i][j-1]+dp[i-1][j];
          }
    }    
    return dp[n-1][m-1];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   ll n,m;
   cin>>n>>m;
    cout<<func(n,m);

    return 0;
}
